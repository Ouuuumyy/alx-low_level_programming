#include <stdio.h>
#include "main.h"

/**
 * main - function prints the number of arguments
 * @argc: the number of arguments
 * @argv: a table contains the arguments
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
