#include "main.h"

/**
 * print_diagonal - is a function that print s a diagonal
 */
void print_diagonal(int n)
{
	int i, l;

	for (i = 1; i <= n; i++)
	{
		if (i > 1)
		{
		for (l = 0; l < i; l++)
		{
			_putchar(' ');
		}
		}
		_putchar('\\');
		_putchar('\n');

	}
}
