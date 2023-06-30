#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of element of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int h;
	int k;

	for (h = 0; h < n--; h++)
	{
		k = a[h];
		a[h] = a[n];
		a[n] = k;
	}
}
