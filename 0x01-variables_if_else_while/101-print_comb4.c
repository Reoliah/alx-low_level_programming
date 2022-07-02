#include <stdio.h>
/**
 * main - combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
	{
		for (c = 48; c <= 57; c++)
		{putchar(a);
		putchar(b);
		putchar(c);
		if (a != 57)
		{putchar(44);
		putchar(32);
	
		}
		}
	}
	}
putchar(10);
	return (0);
}
