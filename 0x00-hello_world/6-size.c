#include <stdio.h>

/**
* main - print the sizes
*
* Description- using the main function
* C program that prints the size of various types 
* Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of int: %ld byte(s)\n", sizeof(i));
	printf("size of long int: %ld byte(s)\n", sizeof(li));
	printf("size of long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of float: %ld byte(s)\n", sizeof(f);
	return (0);
}
