#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - a fucntion that duplicates a string
 * str: input
 * Return: a pointer to the new string
 */

char *_strdup(char *str)
{
	int len = 0;
	int i;
	char *s;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	
	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
