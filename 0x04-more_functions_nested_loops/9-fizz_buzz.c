#include <stdio.h>

/**
 * main - a program that prints from 0 to 100
 * Return: Always 0
 */
int main(void)
{
	int z;

	for (z = 1 ; z <= 100 ;  z++)
	{
		if (z % 3 == 0 && z % 5 != 0)
		{
			printf("Fizz");
		}
		else if (z % 5 == 0 && z % 3 != 0)
		{
			printf("Buzz");
		}
		else if (z % 3 == 0 && z % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (z == 1)
		{
			printf("%d", z);
		}
		else
		{
			printf("%d", z);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}


