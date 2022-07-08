#include "main.h"

/**
 * _isdigit - prints if is digit
 * @c: inout for alphabet
 * Return: return 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
