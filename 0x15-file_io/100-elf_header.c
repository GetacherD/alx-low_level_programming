#include <elf.h>
#include "main.h"
void print_TYPE(uint16_t type);
void print_header(unsigned char *e_id);
void print_OSABI(unsigned char c);
void check_elf(char *buf);
void print_CLASS(unsigned char c);
void print_version(unsigned char c);
void print_DATA(unsigned char c);
/**
* main - entry point
* @argc: number of argumnets
* @argv: args vector
* Return: 0 is success else -1
*/
int main(int __attribute__((unused)) argc, char **argv)
{
	int fd, c;
	ssize_t r;
	char buf[1024];
	unsigned char *e_id;
	Elf64_Ehdr *hdr;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error Opening File\n");
		exit(98);
	}
	r = read(fd, buf, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: reading file\n");
		exit(98);
	}
	check_elf(buf);
	hdr = (Elf64_Ehdr *)buf;
	e_id = (unsigned char *)buf;
	print_header(e_id);
	print_CLASS(e_id[EI_CLASS]);
	print_DATA(e_id[EI_DATA]);
	print_version(e_id[EI_VERSION]);
	print_OSABI(e_id[EI_OSABI]);
	printf("\n ABI Version:                       %u", e_id[EI_ABIVERSION]);
	print_TYPE(hdr->e_type);
	printf("\n Entry point address:               0x%lx\n", hdr->e_entry);
	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Closing file %d", fd);
		exit(98);
	}

	return (0);
}
/**
* print_TYPE - print type of file
* @type: type indicator
*/
void print_TYPE(uint16_t type)
{
	printf("\n Type:                              ");
	switch (type)
	{
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		case ET_NONE:
			printf("NONE (None)");
			break;
		default:
			printf("<unknown: %x>", type);
			break;
	}
}
/**
* print_header - prints header
* @e_id: pointer to header
*/
void print_header(unsigned char *e_id)
{

	printf("ELF Header:\n Magic:   ");
	printf("%.2x ", e_id[EI_MAG0]);
	printf("%.2x ", e_id[EI_MAG1]);
	printf("%.2x ", e_id[EI_MAG2]);
	printf("%.2x ", e_id[EI_MAG3]);
	printf("%.2x ", e_id[EI_CLASS]);
	printf("%.2x ", e_id[EI_DATA]);
	printf("%.2x ", e_id[EI_VERSION]);
	printf("%.2x ", e_id[EI_OSABI]);
	printf("%.2x ", e_id[EI_ABIVERSION]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
	printf("%.2x ", e_id[EI_PAD]);
}
/**
* print_CLASS - print class
* @c: char for class
*/
void print_CLASS(unsigned char c)
{
	printf("\n Class:                             ");

	if (c == ELFCLASS32)
		printf("ELF32");
	else if (c == ELFCLASS64)
		printf("ELF64");
	else if (c == ELFCLASSNONE)
		printf("none");
	else
		printf("<unknown: %x>", c);
}
/**
* print_DATA- prints data
* @c: data
*/
void print_DATA(unsigned char c)
{
	printf("\n Data:                              ");
	if (c == ELFDATA2LSB)
		printf("Two's complement, little-endian");
	else if (c == ELFDATA2MSB)
		printf("Two's complement, big-endian");
	else if (c == ELFDATANONE)
		printf("none");
	else
		printf("unknown: %x>", c);
}
/**
* print_version - print version
* @c: version number
*/
void print_version(unsigned char c)
{
	printf("\n Version:                           %u", c);
	if (c == EV_CURRENT)
		printf(" (current)");
}
/**
* print_OSABI - print OSABI
* @c: OSABI num
*/
void print_OSABI(unsigned char c)
{
	printf("\n OS/ABI:                            ");
	switch (c)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI");
			break;
		case ELFOSABI_LINUX:
			printf("Linux ABI");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI");
			break;
		case ELFOSABI_IRIX:
			printf("IRIX ABI");
			break;
		case ELFOSABI_FREEBSD:
			printf("FreeBSD ABI");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI");
			break;
		case ELFOSABI_ARM:
			printf("ARM architecture ABI");
			break;
		case ELFOSABI_STANDALONE:
			printf("Stand-alone (embedded) ABI");
			break;
		default:
			printf("UNIX System V ABI");
			break;
	}
}
/**
* check_elf - chek if file is elf
* @buf: buffer of file
*/
void check_elf(char *buf)
{
	if (buf[0] != 0x7f || buf[1] != 'E' || buf[2] != 'L' || buf[3] != 'F')
	{
		dprintf(STDERR_FILENO, "NOT ELF FILE\n");
		exit(98);
	}
}
