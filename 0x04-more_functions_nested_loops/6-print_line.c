#include "main.h"

/**
 * print_line - Entry point
 * @n : number of times to print '_'
 * Return: no return
 */
void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
