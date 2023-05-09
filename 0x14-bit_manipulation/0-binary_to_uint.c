#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int res = 0, r = 0;
	int len = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		while (j < i)
		{
			r *= 2;
			j++;
		}

		res += (b[i] * r);
	}

	return (res);
}
