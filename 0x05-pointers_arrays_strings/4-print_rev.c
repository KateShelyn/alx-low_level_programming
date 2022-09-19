#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - a function
 * Description - using print_rev function
 * @s: string reverse
 * Return: 0
 */

void print_rev(char *s);
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
