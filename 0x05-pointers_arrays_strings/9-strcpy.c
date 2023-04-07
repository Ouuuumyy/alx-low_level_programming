#include "main.h"
/**
 * _strcpy -  function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: string to cpy
 * @dest: buffer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int longs = 0;
	char *p = src;

	while (*p != '\0')
	{
		longs++;
		p++;
	}
	l = longs + 1;
	for (i = 0; i <= l; i++)
	{ 
		dest[0] = src[i];
		dest++;
	}
	return (dest);
}
