#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function that prints the number
 * Description - using print_numbers function
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
