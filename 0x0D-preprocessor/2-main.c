#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - prints the name of the current input file
 * Return: 0 always
 */
int main(void)
{
	int size;
	int i = 0;
	char *p;

	size = strlen(__FILE__);
	p = &__FILE__[0];


	while (*p != '\0' && i < size)
	{
		putchar(p[i]);
		p++;
		i++;
	}
	putchar('\n');

	return (0);

}
