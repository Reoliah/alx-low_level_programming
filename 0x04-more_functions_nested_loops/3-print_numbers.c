#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9 followed by a new line
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	for (a >= 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
	return(0);
}
