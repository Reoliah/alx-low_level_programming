#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * @size: dimension of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - 1; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
