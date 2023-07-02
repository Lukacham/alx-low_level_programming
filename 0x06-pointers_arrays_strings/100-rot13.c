#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)
{
	int l;
	int m;
	char data1[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (l = 0; s[l] != '\0'; l++)
{
	for (m = 0; m < 52; m++)
	{
		if (s[l] == data1[m])
		{
			s[l] = datarot[m];
			break;
		}
	}
}
return (s);
}
