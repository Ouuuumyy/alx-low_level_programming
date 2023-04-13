#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int len;
	int i;

	if (size == 0)
	{
		return (NULL);
		printf("failed to allocate memory\n");
	}
	len = sizeof(char) * size;
	str = malloc(len);
	if (str == NULL)
	{
		printf("failed to allocate memory\n");
		exit(1);
	}
	for (i = 0; i < len; i++)
	{
		str[i] = c;
	}
	return (str);
	free(str);
}
