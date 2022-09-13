#include "main.h"

/**
 * main - Prints _putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = "_putchar";
	int count, sz;

	sz = 8;
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}	
