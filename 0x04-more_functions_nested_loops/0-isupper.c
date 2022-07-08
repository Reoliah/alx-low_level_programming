#include "main.h"

/**
 * _isupper - prints if c is upper or lower
 * @c:alphabet input
 * Return: 1 if upper or 0 if lower
 */
int _isupper(int c)
{
	for (c >= 65 && c <= 90)
		return (1);
	else
		return(0);
}
