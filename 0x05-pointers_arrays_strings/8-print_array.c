#include "main.h"
#include <stdio.h>

/**
 * print_array - a function prints elements of an array
 * of integers, followed by a new line.
 * @a: array of integer.
 * @n: number of elements of the array.
 *
 * Reyurn: void.
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
