#include "main.h"
/**
 * print_numbers - a function that prints the number
 * Description - using print_numbers function
 * @n: input
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
	return (0);
}
