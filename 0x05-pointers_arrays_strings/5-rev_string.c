#include "main.h"

/**
 * rev_string - a function that reverse a string
 * @s: string to be checked
 */
void rev_string(char *s)
{
	int l = 0;
	int r;
	char v = s[0];

	while (s[l] != '\0')
		l++;
			for (r = 0 ; r < l ; r++)
			{
				l--;
			v = s[r];
			s[r] = s[l];
			s[l] = v;
			}
}
