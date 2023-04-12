#include <stdio.h>
#include <stdlib.h>

/**
 * create_array: a function that creates an array of chars
 * @size: size of the table
 * @c: the first character
 * Return: s pointer to a char
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	int len;

	len = sizeof(char) * size;
	str = malloc(len);
	for (i = 0; i < len; i++)
	{
		str[0] = c;
	}
	
	return (str);
	free(str);
}
