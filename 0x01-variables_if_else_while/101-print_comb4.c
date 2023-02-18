#include <stdio.h>
/**
 * main - main function
 *
 * Return: alway 0
 */
int main(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (x = 2; x < 10; x++)
			{
				if (i < j && j < x)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(x + '0');
					if (i + j + x != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
