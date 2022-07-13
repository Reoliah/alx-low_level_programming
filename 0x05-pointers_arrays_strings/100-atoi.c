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
			if(size > 0)
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
