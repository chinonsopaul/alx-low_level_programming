#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @n: input value
 * @b: input value
 * @s: input value
 * Return: aways 0 as success
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
