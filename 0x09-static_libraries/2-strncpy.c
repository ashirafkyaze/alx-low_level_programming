#include "main.h"

/**
 * char *_strncpy - function that copies a string.
 * @dest: input destination.
 * @src: input source.
 * @n: input number of bytes.
 * Return: return pointer to the destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
