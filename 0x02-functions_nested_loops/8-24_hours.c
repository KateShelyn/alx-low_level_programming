#include "main.h"
/**
 * jack_bauer - function prints
 * Description - using jack_bauer function
 * @hours - hours
 * @min - minutes
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int min = 0;
	int hours_remainder = hours % 10;
	int min_remainder = min % 10;

	while (hours < 24)
	{
		while (min < 60)
		{
			min_remainder = min % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min_remainder + '0');
			min++;
			_putchar('\n');
		}
	hours++;
	min = 0;
	}

}
