#include <stdio.h>
/**
 * main - combination of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c;
	for (a = 48; a <= 51; a++)
	{for (b = 48; b <= 51; b++)
	{for (c = 48; c <= 51; c++)
		{putchar(a);
		putchar(b);
		putchar(c);
		if (a != 9)
		{putchar(44);
		putchar(32);
		}
		}
	}
	}
putchar(10);
	return (0);
}
