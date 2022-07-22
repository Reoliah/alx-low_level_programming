#include "main.h"
/**
 * _islower - to check if c is upper or lower case
 * @c: letter being tested
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
