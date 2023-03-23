#include "main.h"
/**
 * _isupper - a function that checks for uppercase characters
 * @c: checked character
 * Return: 0 if c is uppercase, otherwise 1
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		printf("is uppercase\n");
		return (0);
	}
	else
	{
		printf("is not uppercase\n");
		return (1);
	}
}
