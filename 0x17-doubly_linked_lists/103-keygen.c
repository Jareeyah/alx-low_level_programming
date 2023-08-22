#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - A program that generate a key depending on a username for crackme5
 * @argc: The number of arguments passed in the program
 * @argv: The array of characters passed in the program
 * Return: 0 on success, otherwise 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, m;
	size_t len, add;
	char *v = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = v[(len ^ 59) & 63];
	for (i = 0, add = 0; i < len; i++)
		add += argv[1][i];
	p[1] = v[(add ^ 79) & 63];
	for (i = 0, m = 1; i < len; i++)
		m = m * argv[1][i];
	p[2] = v[(m ^ 85) & 63];
	for (m = argv[1][0], i = 0; i < len; i++)
		if ((char)m <= argv[1][i])
			m = argv[1][i];
	srand(m ^ 14);
	p[3] = v[rand() & 63];
	for (m = 0, i = 0; i < len; i++)
		m = m + argv[1][i] * argv[1][i];
	p[4] = v[(m ^ 239) & 63];
	for (m = 0, i = 0; (char)i < argv[1][0]; i++)
		m = rand();
	p[5] = v[(m ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
