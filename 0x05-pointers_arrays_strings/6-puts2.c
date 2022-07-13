#include "main.h"

/**
 * puts2 - print one xharacter of two of a string
 * @str: input string
 * Return: no return
 */

void puts2(char *str)
{
	int value = 0;

	while (value >= 0)
	{
		if (str[value] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (str[value] % 2 == 0)
		{
			_putchar(str[value]);
		}
		value++;
	}
}
