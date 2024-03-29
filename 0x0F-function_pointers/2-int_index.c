#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Write a function that searches for an integer.
 * @array: array parameter
 * @cmp: parameter 2
 * @size: input value
 * Return: always 0 as success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
