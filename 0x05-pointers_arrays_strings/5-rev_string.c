#include "main.h"

/**
 * rev_string - Parameter thats reverses a string
 * @s: input string.
 * Return: no return value.
 */

void rev_string(char *s)
{
	int i, j, n = 0;

	char *str, temp;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}
	str = s;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}


