#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n
 * @a: Array of integers
 * @n: Numbers of element of the array to be printed
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
