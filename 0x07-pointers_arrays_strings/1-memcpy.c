#include "main.h"
/**
 * _memcpy -copy memory data
 * @dest: destination memory block
 * @src: source memory block
 * @n: number of bytes to copy
 *
 * Description: copy memory block of fdata from src to dest
 *
 * Return: pointer to destination
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
		i++;
	}

	return (dest);
}
