#include "main.h"

/**
 * _print_rev_recursion - a function
 * Description - using _print_rev_recursion function
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
