#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long int n;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int m = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (n = 1 ; n < 91 ; n++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / m);
	bef2 = (bef % m);
	aft1 = (aft / m);
	aft2 = (aft % m);

	for (n = 92 ; n < 99 ; ++n)
	{
		printf(", %lu", aft1 + (aft2 / m));
		printf("%lu", aft2 % m);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}

