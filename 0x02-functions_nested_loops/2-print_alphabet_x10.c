#include "main.h"
/**
 * print_alphabet_x10 - the function i used
 *
 * main - main function
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char i2;

	for (i = 1; i <= 10; i++)
	{
		for (i2 = 'a'; i2 <= 'z'; i2++)
			_putchar(i2);
		_putchar('\n');
	}
}
