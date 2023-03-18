#include <stdio.h>

/**
 * main - printing alphabets in lowecase expect q and e
 *
 * Return: Always 1 success
 */
int main(void)
{
	char k = 'a';

while (k <= 'z')
if (k != 'q' && k != 'e')
{
	putchar(k);
	k++;
}
	putchar('\n');
return (0);
}
