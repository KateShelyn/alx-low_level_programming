#include <stdio.h>
#include "main.h"

/**
 * main - prints the program
 * Description - using main function
 * @argc: counts arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
