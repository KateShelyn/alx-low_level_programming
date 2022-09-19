#include <stdio.h>
#include "main.h"

/**
 * puts2 - a function
 * Description - using puts2 function
 * @str: string
 * Return: 0
 */

void puts2(char *str);
{
	int i = 0;
	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + 1));
		i++;
	}
	putchar(10);
}
