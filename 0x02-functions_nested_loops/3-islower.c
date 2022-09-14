#include "main.h"
/**
 * _islower - function checks
 * Description - using _islower function
 * @c: input  letter
 * this program prints
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
