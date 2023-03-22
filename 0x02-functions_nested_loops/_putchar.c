#include "main.h"
#include <unistd.h>
/**
 * main - a program that prints _putchar followeed by a line
 * Return: 0(Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
