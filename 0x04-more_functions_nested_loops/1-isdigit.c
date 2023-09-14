#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: function parameter to be checked and confirmed
 * Return: 1 (successful)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}

