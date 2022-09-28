#include "main.h"

/**
 * is_palindrome - returns one if palindrome
 * Desccription - using is_palindrome function
 * @s: string checked
 * Return: 0 , one if palindrome
 */

int is_palindrome(char *s)
{
	int flag = 1;

	check(s, 0, _strlen_recursion(s) - 1, &flag);
	return (flag);
}

/**
 * check - checks if dtring is palindrome
 * @s: string checked
 * @first: first index
 * @end: end index
 * @flag: shows if palindrome
 * Return: void
 */

void check(char *s, int first, int end, int *flag)
{
	if (first <= end)
	{
		if (s[first] == s[end])
			*flag *= 1;
		else
			*flag *= 0;
		check(s, first + 1, end - 1; flag);
	}
}

/**
 * _strlen_recursion - calculates length of string
 * Description - using _strlen_recursion function
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
