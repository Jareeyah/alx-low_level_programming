#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @r: string to be checked
 * Return: string r
 */
char *rot13(char *r)
{
	int s;
	int t;
	char text[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (s = 0; r[s] != '\0'; s++)
	{
		for (t = 0; text[t] != '\0'; t++)
		{
			if (r[s] == text[t])
			{
				r[s] = rot13[t];
				break;
			}
		}
	}
	return (r);
}
