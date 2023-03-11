#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _strchr - main function
 * @s: parameter
 * @c: parameter
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
