#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int x;
	int j;

	int i2;
	int x2;
	int j2;

	while (i <= 98)
	{
		x = (i / 10 + '0');
		j = (i % 10 + '0');
		i2 = 0;
		while (i2 <= 99)
		{
			x2 = (i2 / 10 + '0');
			j2 = (i2 % 10 + '0');

			if (i < i2)
			{
				putchar(x);
				putchar(j);
				putchar(' ');
				putchar(x2);
				putchar(j2);

				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i2++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
