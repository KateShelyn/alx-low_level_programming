#include "main.h"
/**
 * jack_bauer - function prionts
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

	for (hours = 0; hours < 24; hours++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hours / 10 + "0");
			_putchar(hours_remainder + "0");
			_putchar(":");
			_putchar(min / 10 + "0");
			_putchar(min_remainder + "0");
			_putchar('\n');
		}
	}
}
