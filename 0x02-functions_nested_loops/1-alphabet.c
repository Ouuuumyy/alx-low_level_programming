#include "main.h"
/**
 * main - aprogram that prints the alphabets
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
	return ;
}
