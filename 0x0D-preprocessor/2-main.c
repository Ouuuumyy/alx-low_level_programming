#include <stdlib.h>
/**
 * main - prints the name of the current input file
 * Return: 0 always
 */
int main(void)
{
	int size;
	int i = 0;
	char *p;
	char tab[];

	size = strlen(__FILE__);
	p = &__FILE__;


	while (p != '\0' && i < size)
	{
		_putchar(p[i]);
		p++;
		i++;
	}
	_putchar('\n');

	return (0);

}
