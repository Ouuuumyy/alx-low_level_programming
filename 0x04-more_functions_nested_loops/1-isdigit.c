#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is digit and 0 if not
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
