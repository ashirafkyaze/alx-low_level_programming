#include "main.h"

/**
 * reverse_array - function that reverses the content 
 * of an array of integers.
 * @a:input array.
 * @n:input size .
 * Return: no return values.
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
