#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @r: string to be checked
 * Return: string r
 */
char *rot13(char *r)
{
	int s;

for (s = 0; r[s] != '\0'; s++)
	{
if ((r[s] >= 'a' && r[s] <= 'm') || (r[s] >= 'A' && r[s] <= 'M'))
	r[s] += 13;
else if ((r[s] >= 'n' && r[s] <= 'z') || (r[s] >= 'N' && r[s] <= 'Z'))
	r[s] -= 13;
	}
return (r);
}
