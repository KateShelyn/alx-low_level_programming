#include"main.h"

/**
 * swap_int - a function
 * Description - using swap_int function
 * @a: first int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b);
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
