#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from the src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int h;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	h = 0;
	while (h < n && src[h] != '\0')
	{
		dest[k] = src[h];

		k++;
		h++;
	}
	dest[k] = '\0';
	return (dest);
}
