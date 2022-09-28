#include "main.h"

/**
 * reverse_array - a function
 * Description - using reverse_array function
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i > n / 2; i++)
	{
		tmp = a[n -1 -i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
