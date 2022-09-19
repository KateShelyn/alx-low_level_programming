#include <stdio.h>
#include "main.h"

/**
 * print_array - a function
 * Description - using print_array function
 * @a: array
 * @n: inputs
 * Return: 0
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}
