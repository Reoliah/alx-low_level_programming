#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array of the string
 * Return: no return
 */

void puts_half(char *str)
{
	int i;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}