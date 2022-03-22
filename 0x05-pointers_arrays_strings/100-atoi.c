#include <stdio.h>
/**
 * _atoi -extract first occurance of num in string
 * @s: string input
 *
 * Description: extract first num from string
 *
 * Return: int number
 */
int _atoi(char *s)
{
	int i, sum;
	int sign;

	sign = -1;
	i = 0;
	sum = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		if (s[i] >= 48 &&  s[i] <= 57)
		{
			sum = 10 * sum - (s[i] - '0');
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
		i++;
	}
	sum = sum * sign;

	return (sum);
}
