#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, k;
	char s1[] = "aAeEo0tT1L";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[a] == s1[k])
			{
				n[a] = s2[k];
			}
		}
	}
	return (n);
}
