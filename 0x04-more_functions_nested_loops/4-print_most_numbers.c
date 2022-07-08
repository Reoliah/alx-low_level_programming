#include "main.h"

/**
 * print_most_numbers - print numbers
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;
	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i);
		i++;
	}
	_putchar('\n');

	return (0);
}
