#include "main.h"
/**
 * print_times_tables - print times tables of numbers greater than 0 but les than 15
 * @n: number to be tested
 * Return: Always 0
 */
void print_times_table(int n)
{
	int x, y, product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;
				if (y == 0)
				{
					_putchar(product + '0');
				}
				else if (product < 10 && y != 0)
				{
					_putchar('.');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product >= 10 && product < 100)
					_putchar(',');
				_putchar(' ');
				_putchar((product / 100) + '0');
				_putchar(((product/10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
