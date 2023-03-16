#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: parameter
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
