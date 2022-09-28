#include "main.h"

/**
 * is_prime_number - a function
 * Description - using is_prime_number function
 * @n: input
 * Return: 0 , one if n is prime
 */

int is_prime_number(int n)
{
	int first = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, first));
}

/**
 * is_prime -  function one if prime
 * Description - using is_prime function
 * @n: input
 * @first: first input
 * Return: 0 , one if n is prime
 */

int is_prime(int n, int first)
{
	if (first <= 1)
		return (1);
	else if (n % first == 0)
		return (0);
	return (is_prime(n, first - 1));
}
