#include <stdio.h>
#include "main.h"

/**
 * _puts - a function
 * @str: string 
 *
 * Description - using _puts function
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
