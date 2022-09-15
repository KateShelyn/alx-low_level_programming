#include <stdio.h>
#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers
 * Description - using more_numbers function
 * Return: 0
 */

more_numbers(void)
{
	int n, c;

	for ( n = 0, n < 10; n++)
	{
		for (c = 0; c <= 14; c++)
		{
			if ( c > 9)
			{
				putchar(c / 10 + '0');
			}
			putchar(( c % 10) + '0');
		}
		putchar(10);
	}
}
