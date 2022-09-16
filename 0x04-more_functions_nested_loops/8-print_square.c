#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square
 * Description - using print_square function
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int n1, n2;

	if (size > 0)
	{
		for (n1 = 0; n1 < size; n1++)
		{
			for (n2 = 0; n2 < (size - 1); n2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
