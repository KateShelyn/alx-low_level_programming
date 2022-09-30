#include "main.h"
/**
 * _memcpy - fills a memory block with a constant byte
 * Description - using _memcpy function
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: number of bytes to be copied
 * Return: pointer to the copied memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
