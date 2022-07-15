#include "main.h"

/**
 * _strcmp - compares two string
 * s1: first string
 * s2: second string
 * Return: 0 if s1 is equal to s2 and another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + 1) == '\0'))
			break;
		op = *(s1 + 1) - *(s2 + 1);
		i++;
	}
	return (0);
}
