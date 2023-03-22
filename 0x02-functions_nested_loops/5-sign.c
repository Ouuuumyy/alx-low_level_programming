#include "main.h"
/**
 * print_sign - is a fucntion that prints
 * the sign of a number
 * @n: the number to be checked
 * Return: 1 greater than 0
 * Return: 0 is 0
 * Return: -1 is less than 0
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
