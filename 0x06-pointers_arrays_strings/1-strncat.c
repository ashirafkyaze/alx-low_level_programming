#include "main.h"

/**
 * char *_strncat - function that concatenates two strings.
 * @dest: input destination.
 * @src: input source.
 * @n: input integer.
 * Return: Returns a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for(i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
