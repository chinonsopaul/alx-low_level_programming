#include "main.h"
/**
 * print_alphabet - the function i used
 * main - main function
 * _putchar: print a to z
 * Return: always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
