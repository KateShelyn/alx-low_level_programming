#include "main.h"

/**
 * _sqrt_recursion - a function
 * Description - using _sqrt_recursion function
 * @n: input
 * Return: square root n
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - return sqr root of a number
 * @n: input
 * @x: squared input
 * Return: square root n
 */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
