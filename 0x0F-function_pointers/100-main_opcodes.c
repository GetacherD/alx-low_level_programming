#include <stdio.h>
/**
 * main - main entry point
 * @argc: number of argumnets
 * @argv: argument vector
 * Description: main program
 *
 * Return: 0 always
 */
int main(int __attribute__((unused)) argc, char **argv)
{

	int i;
	int (*ptr)(int, char **) = main;
	unsigned char ch;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < atoi(argv[0]); i++)
	{
		ch = *(unsigned char *)ptr;
		printf("%x ", ch);
		ptr++;
	}
	printf("\n");

	return (0);
}
