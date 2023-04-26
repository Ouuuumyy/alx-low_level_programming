#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the current input file
 * Return: 0 always
 */
int main(void)
{
	int i = 0;
	char *p;

	p = &__FILE__[0];


	while (*p != '\0')
	{
		putchar(p[i]);
		p++;
	}
	putchar('\n');

	return (0);

}
