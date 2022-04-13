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
	FILE *fp;

	char ch;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argc < 0)
	{
		printf("Error\n");
		exit(2);
	}
	fp = fopen(__FILE__, "r");
	if (fp == NULL)
		return (-1);
	for (i = 0; i < atoi(argv[1]); i++)
	{
		ch = fgetc(fp);
		if (i > 108)
		{
			printf("%x\t", ch);
		}
	}
	fclose(fp);
	printf("\n");
	return (0);
}
