#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size : dimension of triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int x, y;
	for (x = 1; x <= size; x++)
	{
		for (y = size - 1; y > 0; y--)
			_putchar(' ');
		for (y = x; y > 0; y--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
