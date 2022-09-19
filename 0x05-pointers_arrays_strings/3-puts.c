#include <stdio.h>
#include "main.h"

/**
 * _puts - a function
 * Description - using _puts function
 * @str: string
 * Return: 0
 */

void _puts(char *str);
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
