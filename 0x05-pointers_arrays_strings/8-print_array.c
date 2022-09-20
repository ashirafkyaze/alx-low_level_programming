#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * print_array - Parameter that prints n elements 
 * of an array.
 * @a:input array.
 * @n:input n elements
 * Return: no return.
=======
 * print_array - Parameter that prints
 * n elements of an array.
 * @n: input integer.
 * @a: array size.
 * Return: no return value.
>>>>>>> 372fb3b774db45f1fc810fca323360e9edadf29c
 */

void print_array(int *a, int n)
{
	int i;

<<<<<<< HEAD
	for (i = 0; i < n; i++)
	{
		printf("%d",*(a+i));

		if (i != (n - 1))
			printf(",");
	}
	printf("\n");
=======
	for (i = 0; i < *a; i++)
	{
		if (i != n)
		{
			printf("%d", a[i]);
		}
	}
>>>>>>> 372fb3b774db45f1fc810fca323360e9edadf29c
}
