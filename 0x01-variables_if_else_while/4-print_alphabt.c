#include <stdio.h>
/**
 * main - a program that prints the alphabet using putchar
 * Return: Always 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i = 0; i < 26 ; i++)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
		{
		putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
