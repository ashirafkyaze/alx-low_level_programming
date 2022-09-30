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
	if (argc == 3)
	{
		int m;

		m = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", m);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
