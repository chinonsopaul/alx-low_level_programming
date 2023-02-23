#include "main.h"
/**
 * _isdigit -  a function that checks for a digit (0 through 9)
 * @i: parameter to be checked
 * Return: always 0
 */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	return (0);
}
