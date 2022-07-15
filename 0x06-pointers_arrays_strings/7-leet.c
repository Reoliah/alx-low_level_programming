#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: input string
 * Return: the pointer to dest
 */

char *leet(char *s)
{
	int i, c = 0;
	int low_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[c] == low_letters[i] || s[c]  == upper_letters[i])
			{
				s[c] = numbers[i];
				break;
			}
		}
		c++;
	}
	return (0);
}
