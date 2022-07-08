#include "main.h"
#include <stdio.h>

/**
 * main - print numbers up to 100
 * Description: for multiples of 3 print Fizz, for multiples of 5 print Buzz and for multiples of both 3 and 5 print FizzBuzz.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p = 100;
	int i;

	while (i <= p)
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
			if (i < p)
				printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%i ", i);
		}
	i++;
	}
	printf("\n");
	return (0);
}
