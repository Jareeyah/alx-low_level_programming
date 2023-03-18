#include<stdio.h>

/**
 * main - printing alphabets in lowercase and upercase
 *
 * Return: Always 1 success
 */
int main(void)
{
	char k = 'a';
	char l = 'A';

while (k <= 'z')
{
	putchar(k);
	k++;
}
while (l <= 'Z')
{
	putchar(l);
	l++;
}
	putchar('\n');
return (0);
}
