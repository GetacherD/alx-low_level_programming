#include <stdio.h>
#include <unistd.h>
int dprintf(int fd, const char *format, ...){

/*	static int i = 0;
	if (i == 0)
	{
		i++;
		return (write(1, "9 8 10 24 75 9\n",15));
	}
*/
return (0);
}

int printf(const char *format, ...){

	static int i = 0;
	if (i == 0)
	{
		i++;
		/*return (write(1, "9 8 10 24 75 9\n",15));*/
		return (write(1, "Congratulations, you win the Jackpot!\n",38));
	}


return (0);	
}
int puts(const char *s)
{
/*	static int i = 0;
	if (i == 0)
	{
		i++;
		return (write(1, "Congratulations, you win the Jackpot!\n",38));
	}*/
	return (0);
}
