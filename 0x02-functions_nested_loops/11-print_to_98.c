#include <stdio.h>
/**
 * print_to_98 - print function
 * Description - using print_to_98 function
 * @n: input start
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >98)
			printf("%d, ", n--);
		printf("%\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

