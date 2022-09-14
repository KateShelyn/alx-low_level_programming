#include "main.h"
/**
 * jack_bauer - function
 * Description - using jack_bauer function
 * @h - hour
 * @m - minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int hours_remainder = hours % 10;
	int min_remainder = mins % 10;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + "0");
			_putchar(hours_remainder + "0");
			_putchar(":");
			_putchar((m / 10) + "0");
			_putchar(min_remainder + "0");
			_putchar('\n');
			minutes = 0;
		}
	}
}
