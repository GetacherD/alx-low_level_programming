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
	int i,j;
	char tmp;

        length =len(s);
	j = length -1;
	for(i = 0 ; i < length; i++)
	{
		tmp=s[i];
		s[i]=cp[j];
		cp[j]=tmp;
		j--;
	}

}
