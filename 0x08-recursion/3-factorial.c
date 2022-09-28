#include "main.h"

/**
 * factorial - a function
 * Description - using factorial function
 * @n: input
 * Return: factorial
 */

int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	result = factorial(n - 1);
	return (n * result);
}
