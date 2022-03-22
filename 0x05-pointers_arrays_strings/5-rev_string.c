#include "main.h"
/**
 * len -reurn len
 * @s: str input
 *
 * Description: return len
 *
 * Return: len
 */
int len(char *s)
{
	int le;

	le = 0;
	while(*s != '\0')
	{
		le++;
		s++;
	}

	return (le++);
}
/**
 * rev_string -print string in reverse
 * @s: input string
 *
 * Description: prints string in reverse order
 */
void rev_string(char *s)
{
	int length;
	char *cp = s;
	int i;

        length =len(s);
	for(i = 0 ; i < length; i++)
	{
		s++;
	}
	for(i = 0; i < length; i++)
	{
		cp[i]=*s;
		s--;
		
	}
	for (i = 0; i < length; i++)
	{
		s[i]=cp[i];
	}

}
