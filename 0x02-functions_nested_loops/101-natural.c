#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int sum;

	sum = 0;

	for (a = 0; a < 10; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
