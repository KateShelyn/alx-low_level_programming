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
	int h % = "h % 10";
	int m % = "m % 10";

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + "0");
			_putchar((h % ) + "0");
			_putchar(":");
			_putchar((m / 10) + "0");
			_putchar((m % ) + "0");
			_putchar('\n');
		}
	}
}
