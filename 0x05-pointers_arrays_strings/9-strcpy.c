#include "main.h"

/**
 * _strcpy - a function
 * Description - using _strcpy function
 * @src: source
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (0);
}
