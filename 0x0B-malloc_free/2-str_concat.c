#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, ii, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[ii] != '\0')
	{
		ii++;
	}

	concat = malloc(sizeof(char) * (i + ii + 1));
	if (concat == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		concat[j] = s1[j];
	}
	for (j = 0; j < ii; j++)
	{
		concat[j + i] = s2[j];
	}
	concat[i + ii] = '\0';
	return (concat);
}
