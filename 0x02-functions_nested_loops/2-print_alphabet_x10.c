#include "main.h"
/**
 * print_alphabet_x10 - print ten times
 * Description - using print_alphabet_x10 function
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}

}

