#include <stdio.h>
/**
 * main - a program that prints the alphabet using putchar
 * Return: Always 0
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
