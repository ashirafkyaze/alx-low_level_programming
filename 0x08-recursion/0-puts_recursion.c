#include "main.h"

/**
 * _puts_recursion - function that puts a string
 * followed by a new line.
 * @s:input string.
 * Return:no return value.
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(*(s + i));
	}
	_putchar('\n');
}
