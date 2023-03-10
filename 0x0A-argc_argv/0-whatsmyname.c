#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
