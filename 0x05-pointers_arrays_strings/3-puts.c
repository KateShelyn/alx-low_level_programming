#include <stdio.h>
#include "main.h"

/**
 * _puts - a function
 * Description - using _puts function
 * @str: string
 * Return no error: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
