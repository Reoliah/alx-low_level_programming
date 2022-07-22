#include <stdio.h>

/**
 * main - prints arguments it received
 * @argc: number of command line arguments
 * @argv: array that xontains the programme line arguments
 * Return: 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
