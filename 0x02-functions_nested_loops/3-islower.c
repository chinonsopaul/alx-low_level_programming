#include "main.h"

/**
 * _islower - function to prints lower caese
 *
 * @c: parameter to be printed
 *
 * Return: 1 if the result is lowercase and return 0 if it's not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
