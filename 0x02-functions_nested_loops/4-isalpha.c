#include "main.h"
/**
 * _isalpha - function that checks alpherbet
 *
 * @c: parameter to be return
 * main - main function
 *
 * Return: always 1 if it's a leter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
