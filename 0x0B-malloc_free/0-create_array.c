#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: parameter
 * @c: parameter 2
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if  (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
