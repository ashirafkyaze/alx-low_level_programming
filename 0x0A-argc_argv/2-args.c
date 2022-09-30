#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments its receives.
 * @argc:argument count
 * @argv:argument vector
 *
 * Return: no value.
 */

int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
