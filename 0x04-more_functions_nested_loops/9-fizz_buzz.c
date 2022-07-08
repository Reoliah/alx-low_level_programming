#include "main.h"
#include <stdio.h>

/**
 * main - print the numbwrs feom 1 to 100 followed by a new line
 * Description: for multiples of 3 print Fizz, for multiples of 5 print Buzz and for multiples of both 3 and 5 print FizzBuzz.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else 
			printf("%d", i);
	}
	print("\n");

	return (0);
}
