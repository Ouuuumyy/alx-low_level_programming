#include <stddef.h>
#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

#ifndef FUNCTION_PIONTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
