#include "main.h"

/**
 * Print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */

void print_most_numbers(void)
{
	int c;

	c = 48;

	while (c < 58)
	{
		if ( c == 50 || c == 52)
		{
			++c;
		}
		else
		{
			_putchar(c);
		}
	++c;	
	}
	_putchar('\n');
}	
