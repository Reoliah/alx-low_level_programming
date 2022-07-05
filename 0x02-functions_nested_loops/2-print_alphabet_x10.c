#include "main.h"
                                                  /**                                                * main - print all alphabets in lower case, ten times, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{_putchar(y);
		}
		_putchar('\n');
	}
}
