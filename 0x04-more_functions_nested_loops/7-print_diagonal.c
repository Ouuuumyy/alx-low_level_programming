#include "main.h"

/**
 * print_diagonal - is a function that print s a diagonal
 */
void print_diagonal(int n)
{
	int i, l;

	if ( n == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		for (l = 1; l < i; l++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');

	}
	}
}
