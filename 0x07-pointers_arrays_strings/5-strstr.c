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
