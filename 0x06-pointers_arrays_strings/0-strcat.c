#include "main.h"

/**
 * char *_strcat - function that concatenates two strings.
 * @dest: input destination.
 * @src: input source.
 * Return: returns a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
