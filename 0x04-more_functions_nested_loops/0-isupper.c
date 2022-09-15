#include "main.h"
/**
 * _isupper - a function that prints uppercase characters
 * Description - using _isupper function
 * @c: input letter
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
