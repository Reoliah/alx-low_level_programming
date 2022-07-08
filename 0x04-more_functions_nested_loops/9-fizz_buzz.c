#include "main.h"
#include <stdio.h>

/**
 * main - print numbers up to 100
 * Description: for multiples of 3 print Fizz, for multiples of 5 print Buzz and for multiples of both 3 and 5 print FizzBuzz.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
