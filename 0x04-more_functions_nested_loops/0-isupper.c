#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: parameter to be checked
 * Return: 1 as success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
