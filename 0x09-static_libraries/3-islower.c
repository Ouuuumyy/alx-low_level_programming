#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is a character to be checked
 * Return: 1 (Success)
 * otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
