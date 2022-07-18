#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		else if (*(s + i) != c)
			return ('\0');
		else
			return ("NULL");
		i++;
	}
	return ('\0');
}
