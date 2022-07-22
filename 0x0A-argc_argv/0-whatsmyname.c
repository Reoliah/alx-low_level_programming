#include <stdio.h>

/**
 * main - print its name followed by a new line
 * @argc: number of command line
 * @argv: array that contains the programme command line argument
 * Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
