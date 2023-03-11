#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _memset - main function
 * @s: parameter
 * @b: paramter
 * @n: parameter
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
