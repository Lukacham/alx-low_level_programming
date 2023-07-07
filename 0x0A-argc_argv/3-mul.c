#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - print product of argument numbers
 * @argc: argument count
 * @argv: multiple
 * Return: 0, 1 if two arguments not given
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	(void) argc;

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
