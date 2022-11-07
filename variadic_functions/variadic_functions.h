#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_char(va_list all);
void print_int(va_list all);
void print_float(va_list all);
void print_string(va_list all);


typedef struct print
{
	char *t_arg;
	void (*f)(va_list);
} print_arg;

#endif
