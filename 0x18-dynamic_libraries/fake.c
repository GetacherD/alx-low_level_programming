#include <unistd.h>
int puts(const char __attribute__((unused))*s)
{
	write(1, "Congratulations, you win the Jackpot!\n", 38);
}
int printf(const char __attribute__((unused))*format, ...)
{
	static int x = 0;
	if (!x)
	{
		write(1, "9 8 10 24 75 9\n", 16);
		x = 1;
	}
	return (0);
}
