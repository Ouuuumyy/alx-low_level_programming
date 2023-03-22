#include "main.h"
/**
 * main - checks for lowercase character
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
