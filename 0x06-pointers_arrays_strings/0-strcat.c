#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
int t;
int j;
while (dest[t] != '\0')
{
t++;
}
t = 0;
while (src[j] != '\0')
{
dest [t] = src[j];
t++;
j++;
}
dest[t] = '\0';
return (dest);
}
