#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
