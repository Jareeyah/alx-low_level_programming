#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number to a variable
 *
 * Return: Always 1 success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n > 0)
	printf("%d is positive\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
else
	printf("%d is zero\n", n);
return (0);
}

