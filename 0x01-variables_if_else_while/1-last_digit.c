#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 /**
  * main - starting point
  * Return: Always 0 (Success)
 */
int main(void)
{
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2;
last = n % 10;
	printf("Last digit of "%d" is "%d"", n, last);
	if (last > 5)
	{printf("and is greater than 5"); }
	if (last == 0) 
	{printf("and is 0"); }
	if (last != 0 && last < 6)
	{printf("and is less than 6 and not 0"); }
	printf("\n");
         return (0);
 }
