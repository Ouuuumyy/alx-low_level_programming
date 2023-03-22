#include "main.h"
/**
 * main - aprogram that prints alphabets
 * Return: 1 (Success), otherwise 0
 */
int _isalpha(int c)
{
	if (c > 'a' && c <= 'z' || c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
