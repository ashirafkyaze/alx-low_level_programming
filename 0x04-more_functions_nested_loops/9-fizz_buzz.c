#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else
			printf("%d", i);
	}
	printf("\n");
	return (0);
}