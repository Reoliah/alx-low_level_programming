#include "main.h"

/**
 * _isdigit - check if digit is between 0 and 9
 * @c : digit to be tested
 * Return: Always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
