#include <stdio.h>

/**
 * main - prints alphabets in lowercase then in uppercase
 *
 * Return: Always 1 successs
 */
int main(void)
{
	char k = 'a';
	char l = 'A';

while (k <= 'z')
{
	putchar(k);
}
	k++;
while (l <= 'Z')
{
	putchar(l);
}
	l++;
	putchar('\n');
return (0);
}


