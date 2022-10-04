/**
 * int _putchar(char c);
 * int _islower(int c);
 * int _isalpha(int c);
 * int _abs(int n);
 * int _isupper(int c);
 * int _isdigit(int c);
 * int _strlen(char *s);
 * void _puts(char *s);
 * char *_strcpy(char *dest, char *src);
 * int _atoi(char *s);
 * char *_strcat(char *dest, char *src);
 * char *_strncat(char *dest, char *src, int n);
 * char *_strncpy(char *dest, char *src, int n);
 * int _strcmp(char *s1, char *s2);
 * char *_memset(char *s, char b, unsigned int n);
 * char *_memcpy(char *dest, char *src, unsigned int n);
 * char *_strchr(char *s, char c);
 * unsigned int _strspn(char *s, char *accept);
 * char *_strpbrk(char *s, char *accept);
 * char *_strstr(char *haystack, char *needle);
 */


#include "main.h"
/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	unsigned int count = 0, size = 0, oi = 0, pm = 1, n = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;
		if (*(s + count) == '-')
			pm *= -1;
		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				n *= 10;
			size++;
		}
		count++;
	}
	for (i = count - size; i < count; i++)
	{
		oi = oi + ((*(s + i) - 48) * n);
		n /= 10;
	}
	return (oi * pm);
}

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

#include "main.h"
/**
 * _puts - print a string, followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

#include "main.h"
/**
 * _isupper - prints if c is upper or lower
 * @c:alphabet input
 * Return: 1 if upper or 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isdigit - prints if is digit
 * @c: inout for alphabet
 * Return: return 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

#include <unistd.h>
/**
 * _putchar - write the character c to std
 * @c: character to be printed
 *
 * Return: on success 1
 * On error, -1 is returned, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "main.h"
/**
 * _islower - to check if c is upper or lower case
 * @c: letter being tested
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _isalpha - check whether C is upper or lower case
 * @c: letter being tested
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 *@n: number being tested
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}

#include "main.h"
/**
 * _strcat - functions for strings
 * @dest: destination
 * @src: source
 * Return: return dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source
 * @n: amount of byte used from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: amount of bytes from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 is equal to s2 and another number if not
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the point to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}

#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s: string
 * @c: character
 * Return: pointer to character
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

#include "main.h"

/**
 * _strspn -get the length of a prefix substring
 * @s: initial segment
 * @accept: accepted bytes
 * Return: returns the number of accepted bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}

#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: initial segment
 * @accept: accepted bytes
 * Return: accepted bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}

#include "main.h"

/**
 * _strstr - find first occurence of substring needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *jhaystack;
	char *kneedle;

	while (*haystack != '\0')
	{
		jhaystack = haystack;
		kneedle = needle;
		while (*haystack != '\0' && *kneedle != '\0' && *haystack == *kneedle)
		{
			haystack++;
			kneedle++;
		}
		if (!*kneedle)
			return (jhaystack);
		haystack = jhaystack + 1;
	}
	return (0);
}
