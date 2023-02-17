#include <stdio.h>
/**
 * main - main functions
 *
 * Return: always 0
 */
int main(void)
{
	char i;
	char x;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);


}
