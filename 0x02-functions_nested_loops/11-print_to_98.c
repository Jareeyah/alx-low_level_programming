#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: is int to be printed from
 */
void print_to_98(int n)
{
	int o;

	if (n >= 0 && n <= 98)
	{
		for (o = n ; o <= 98 ; o++)
		{
			printf("%d", o);
			if (o != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (o = n ; o <= 98 ; o++)
		{
			printf("%d", o);
			if (o != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (o = n ; o >= 98 ; o--)
		{
			printf("%d", o);
			if (o != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d", n);
}

