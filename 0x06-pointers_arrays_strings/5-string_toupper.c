#include "main.h"
#include <string.h>

/**
 * string_toupper - a function
 * Description - using string_toupper function
 * @str: string
 * Return: address string
 */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
