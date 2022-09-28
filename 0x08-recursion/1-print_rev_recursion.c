#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s:input string.
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
	}
	_putchar(s + count);
	_putchar(s + (count - 1));
}
