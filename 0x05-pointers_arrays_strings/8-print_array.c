#include "main.h"
#include <stdio.h>

/**
 * print_array - Parameter that prints
 * n elements of an array.
 * @n: input integer.
 * @a: array size.
 * Return: no return value.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < *a; i++)
	{
		if (i != n)
		{
			printf("%d", a[i]);
		}
	}
}
