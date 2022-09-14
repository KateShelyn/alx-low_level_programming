#include "main.h"
/**
 * _isalpha - function
 * Description - using _isalpha function
 * @c: input letter
 * this program prints
 * Return: 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
