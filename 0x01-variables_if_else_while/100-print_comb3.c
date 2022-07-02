#include <stdio.h>
/**
 * main- write a programme that prints all possible combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
	int ch, nm;
{
	for (ch = 1; ch <= 9; ch++)
	{for(nm = 1; nm <=9; nm++)
	{putchar(ch);
	putchar(nm);
	if (ch != 9 && nm != 9)
	{putchar(",");
	putchar(" "); } 
	}
}
putchar("\n");

return (0);
}
