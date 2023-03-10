#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}

