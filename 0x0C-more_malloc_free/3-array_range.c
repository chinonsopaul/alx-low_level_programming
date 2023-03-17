#include "main.h"
#include <stdlib.h>
/**
 * array_range - Write a function that creates an array of integers.
 * @min: parameter 1
 * @max: parameter 2
 * Return: always 0
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
