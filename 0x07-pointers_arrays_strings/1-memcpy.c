#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @n: input value
 * @src: input value
 * @dest: input value
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
