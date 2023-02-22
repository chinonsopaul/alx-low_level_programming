#include "main.h"
/**
 * print_times_table - a function that prints the n
 * @n: parameter to be checked
 * Return: alway 0
 */
void print_times_table(int n)
{
	int num, multy, prode;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (multy = 1; multy <= n; multy++)
			{
				_putchar(',');
				_putchar(' ');
				prode = num * multy;
				if (prode <= 99)
					_putchar(' ');
				if (prode <= 9)
					_putchar(' ');
				if (prode >= 100)
				{
					_putchar((prode / 100) + '0');
					_putchar(((prode / 10)) % 10 + '0');
				}
				else if (prode <= 99 && prode >= 10)
				{
					_putchar((prode / 10) + '0');
				}
				_putchar((prode / 10) + '0');
			}
			_putchar('\n');
		}
	}
}
