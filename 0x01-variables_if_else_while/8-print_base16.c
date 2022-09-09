#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int m  = 48; /*48; decimal rep of 0*/

	while (m <= 102) /*102; decimal rep of f*/
	{
		putchar(m);

		/*after 9 we jump to 96*/
		if (m == 57)
		       m += 39;
		++m;
	}
	putchar('\n');
	return (0);
}
