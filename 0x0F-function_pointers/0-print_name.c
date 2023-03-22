#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name.
 * @name: parameter 1
 * @f: parameter 2
 * Return: always 0 as success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
