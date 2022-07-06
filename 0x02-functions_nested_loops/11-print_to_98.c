#include "main.h"
/**
 * print_to_98 - print all natural numbers from n
 * Return: returns nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <=97; n++)
			printf("%d", n);
	}
	else
	{
		for (n = n; n >= 98; n--)
			printf("%d", n);
	}
	print("98\n");
}
