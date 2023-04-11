#include <stdio.h>
#include "main.h"

/**
 * main - function prints the name of the program
 * @argc: the number of arguments
 * @argv: a table contains the arguments
 *
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
