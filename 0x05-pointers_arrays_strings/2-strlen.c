#include "main.h"

/**
 * _strlen - prints length of string
 * @s: string to be tested
 * Return: length of string
 */

int _strlen(char *s)
{
	int count;
	int len = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		len++;
	}
	return (len);
}
