#include <stdio.h>
#include "main.h"

/**
 * print_line -a function that draws a straight line
 * Description - using print_line function
 * @n: parameter
 * return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
