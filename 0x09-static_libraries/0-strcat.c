#include "main.h"

/**
 * _strcat - a function
 * Description - using _strcat function
 * @dest: appended destination
 * @src: concatenated source
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
