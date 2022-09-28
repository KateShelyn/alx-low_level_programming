#include "main.h"

/**
 * _puts_recursion - a funtion
 * Description - using _puts_recursion function
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
