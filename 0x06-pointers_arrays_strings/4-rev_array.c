#include "main.h"
/**
 * reverse_array - a function that reverses the content of
 * an array of integers
 * @a: inputs
 * @n: second input
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int u;

	for (i = 0; i < n--; i++)
	{
		u = a[i];
		a[i] = a[n];
		a[n] = u;
	}
}
