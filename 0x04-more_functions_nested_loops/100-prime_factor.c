#include "main.h"
#include <stdio.h>

/**
 * main - print prime factors
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int x = 612852475143;

	long int count;

	for (count = 2; count < x; count++)
	{
		if (x % count == 0)
			x = x / count;
	}
	printf("%ld\n", count);
	return (0);
}
