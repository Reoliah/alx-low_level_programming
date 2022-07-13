#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: input array
 * @n : input n elements of integers
 * Return: void
 */

void print_array(int *a, int n)
{
	short c;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}
