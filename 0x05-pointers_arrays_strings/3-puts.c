#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
