#include "main.h"
#include <unistd.h>
/**
 * _putchar -  writes the character c to the stdout
 * @c: the character to print
 * Return: 0 on Success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
