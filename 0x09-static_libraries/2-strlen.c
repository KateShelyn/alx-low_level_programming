#include "main.h"

/**
 * _strlen - a function
 * Description - using _strlen function
 * @s: string
 * Return: length for integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
