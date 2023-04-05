#include "main.h"
/**
 * _strlen - a funtion that returns the length of a string
 * @s: the string
 * Return: value of s
 */
int _strlen(char *s)
{
	int  longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}
	return (longs);
}
