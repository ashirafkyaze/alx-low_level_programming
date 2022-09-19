#include "main.h"

/**
 * _puts - parameter that prints a string,followed by a new line to stdout.
 * @str: input character
 * Return: no return value.
 */

void _puts(char *str)
{
	int n;

	n = 0;

	while (n >= 0)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[n]);
		n++;
	}
}
