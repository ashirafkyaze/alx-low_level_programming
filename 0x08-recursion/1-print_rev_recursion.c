#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s:input string.
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
