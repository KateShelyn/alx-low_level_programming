#include "main.h"

/**
 * _strncat - a function
 * Description - using _strncat function
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
