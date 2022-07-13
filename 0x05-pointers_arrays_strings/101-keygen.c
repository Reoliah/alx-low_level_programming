#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * keygen - generate keygen
 * Return: return 0 always
 */

int main(void)
{
	time_t t;
	int r = 0;
	int c = 0;

	srand((unsigned int) time (&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
