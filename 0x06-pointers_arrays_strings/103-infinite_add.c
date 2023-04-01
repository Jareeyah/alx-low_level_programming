#include "main.h"

/**
 * infinite_add - function that adds two numbers
 * @n1: char to be checked
 * @n2: char to be checked
 * @r: buffer to store result
 * @size_r: size of  buffer
 * Return: pointer to result, or 0 if result cannot be stored in buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, k = 0, l, m, sum, j = 0;

	while (n1[i])
		i++;
	while (n2[k])
		k++;
	if (i + 1 > size_r || k + 1 > size_r)
		return (0);
	for (l = i - 1, m = k - 1; l >= 0 || m >= 0; l--, m--)
	{
		sum = j;
		if (l >= 0)
			sum += n1[l] - '0';
		if (m >= 0)
			sum += n2[m] - '0';
		j = sum / 10;
		sum = sum % 10;
		r[i + k - l - m - 2] = sum + '0';
	}
	if (j)
	{
		if (i + k + 1 > size_r)
			return (0);
		r[i + k - l - m - 2] = j + '0';
	}
	for (l = 0; l < (i + l) / 2; l++)
	{
		sum = r[l];
		r[l] = r[i + k - l - 2];
		r[i + k - l - 2] = sum;
	}
	r[i + k - l - m - 2] = '\0';
	return (r);
}
