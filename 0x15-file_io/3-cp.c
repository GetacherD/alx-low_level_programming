#include "main.h"

/**
* main - entry point to program
* @argc: argumnet count
* @argv: args vector
* Return: 0 always
*/
int main(int argc, char **argv)
{
	ssize_t r, w, len, fd, fdr;
	off_t end, cur;
	char *buf;

	len = 0;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = (int)open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cur = lseek((int)fd, 0, SEEK_CUR);
	end = lseek((int)fd, 0, SEEK_END);
	len = (end - cur);
	buf = malloc(sizeof(char) * len);
	lseek((int)fd, -len, SEEK_CUR);
	if (buf == NULL)
		return (-1);
	r = read((int)fd, buf, len);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buf);
		exit(98);
	}
	fdr = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	w = (int)write((int)fdr, buf, len);
	if (w == -1 || (int)fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buf);
		exit(99);
	}
	if (close((int)fdr) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)fdr);
		free(buf);
		exit(100);
	}
	if (close((int)fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", (int)fd);
		free(buf);
		exit(100);
	}

	free(buf);
	return (1);
}
