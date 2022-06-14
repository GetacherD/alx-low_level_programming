#include <unistd.h>
int puts(const char *s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
}
int printf(const char *format, ...)
{
	static int x = 1;
	if (x == 1)
	{
		write(1, "9 8 10 24 75 9\n", 16);
		x = 2;
	}
	return (0);
}
