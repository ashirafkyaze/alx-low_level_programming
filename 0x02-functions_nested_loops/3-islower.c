#include "main.h"

/**
 * _islower -shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int z)
{
	if (z >= 97 && z <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}	

