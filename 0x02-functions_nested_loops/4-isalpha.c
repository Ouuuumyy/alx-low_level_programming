#include "main.h"
/**
 * _isalpha - aprogram that prints alphabets
 * @c:is the character to be checked
 * Return: 1 (Success), otherwise 0
 */
int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
