#include "main.h"
/**
 * print_last_digit - function
 * Description - print_last_digit function
 * @n: input letter
 * Return:  0
 */
int print_last_digit(int n)
{
	int p;

	p = (n % 10);

	if (p < 0)
	{
		p = (-1 * p);
	}
	_putchar(p + '0');
	return (p);
}
