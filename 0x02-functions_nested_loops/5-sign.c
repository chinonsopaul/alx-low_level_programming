#include "main.h"
#include <stdio.h>

/**
 * print_sign - Write a function that prints the sign of a number
 *
 * @n: parameter of c
 * Return: 1if n is greater than 0 and so on
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	printf("\n");
}
