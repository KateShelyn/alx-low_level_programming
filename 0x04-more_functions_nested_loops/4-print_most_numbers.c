#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers
 * Description - using print_most_numbers function
 * Return: 0
 */

print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
		if ((n == 50) || (n ==52))
		{
			continue;
		}
	putchar(n);
}
				
