#include "main.h"

/**
 * more_numbers - print 0-14 x10
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = '0'; y <= '14'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
