#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @a: pamater to be checked
 *
 * Return: alway return a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
