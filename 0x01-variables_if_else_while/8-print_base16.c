#include <stdio.h>
/**
 * main - print if the number is positive
 *
 * Description - using main function
 * this program prints
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchr('\n');
	return (0);
}
