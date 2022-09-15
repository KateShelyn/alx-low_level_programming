#include "main.h"
/**
 * print_numbers - a function that prints the number from 0 to 9
 * Description - using print_numbers function
 * Return: 0
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
