#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @size: dimension of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int a, b, i, j;

	if (size > 0)
	{
		i = size - 1;
		for (a = 0; a < size; a++)
		{
			for (b = i;  b > 0; b--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= a; j++)
			{
				_putchar(35);
			}
			i--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
