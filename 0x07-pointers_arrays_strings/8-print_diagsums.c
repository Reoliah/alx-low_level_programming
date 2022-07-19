#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of diagonals of square matrix
 * @a: inputs pointer
 * @size: size of matrix
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + 1);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
