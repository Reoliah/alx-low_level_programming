#include <stdio.h>
/**
 * main- write a programme that prints all possible combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;
	int nm;

	for (ch = 48; ch <= 57; ch++)
	{
		for (nm = 48; nm <= 57; nm++)
	{putchar(ch);
	putchar(nm);
	while (ch = 57 || nm = 57)
	{continue ch++; nm++; }
       	while (ch = 57 && nm = 57)
	{break ch++; nm++; }
	if (ch != 57)
	{putchar(44);
	putchar(32); }
	}
}
putchar(10);

return (0);
}
