#include "main.h"

/**
 * factorial - a function
 * Description - using factorial function
 * @n: input
 * Return: 0
 */

int factorial(int n)
{
	int result = n;

	if(n < 0)
		return (-1);
	else if (n >= 0 && n<= 1)
		return (1);

	return (0);
}
