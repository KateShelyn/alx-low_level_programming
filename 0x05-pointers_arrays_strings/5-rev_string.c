#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverses
 * Description - using rev_string function
 * @s: string reverse
 * Return: s
 */

void rev_string(char *s)
{
	int rev = *s;

	while (rev--)
		putchar(*(s + rev));
	putchar(10);
}
