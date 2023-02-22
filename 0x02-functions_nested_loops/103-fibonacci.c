#include <stdio.h>
/**
 * main - main function that print sum
 * less than 4000000
 * Return: 0 as success
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, summ = k;

	while (k + j < 4000000)
	{
		k += j;
		summ += k;
		j = k - j;
		++i;
	}
	printf("%ld\n", summ);
	return (0);
}
