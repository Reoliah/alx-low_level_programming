#include "main.h"

/**
 * _isupper - prints if c is upper or lower
 * @c:alphabet input
 * Return: 1 if upper or 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
