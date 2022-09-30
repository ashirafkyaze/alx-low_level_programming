#include "main.h"
#include <stdio.h>

/**
 * main - program that multiplies two numbers.
 * @argc:argument count.
 * @argv:argument vector.
 * Return: no value.
 */

int main(int argc, char *argv[])
{
	if (argc > 0 && argc == 2)
	{
		printf("%d\n", argv[1] * argv[2]);
	}
	else
	{
		printf("Error");
	}

	return (0);
}
