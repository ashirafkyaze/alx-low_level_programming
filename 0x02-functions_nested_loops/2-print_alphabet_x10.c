#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int n,m;

	for (n = 0; n<= 9 ; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
	_putchar('\n');
	}
}
