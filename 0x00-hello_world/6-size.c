#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 on success
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
	printf("size of int: %lu byte(s)", (unsigned int)sizeof(b));
	printf("size of a long int: %lu byte(s)", (unsigned int)sizeof(c));
	printf("size of a long int: %lu byte(s)", (unsigned int)sizeof(b));
	printf("size of a float: %lu byte(s)", (unsigned int)sizeof(f));

	return (0);
}
