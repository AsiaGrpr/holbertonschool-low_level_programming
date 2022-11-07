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

void pr_c(va_list tall);
void pr_i(va_list tall);
void pr_f(va_list tall);
void pr_s(va_list tall);


typedef struct print
{
	char *t_arg;
	void (*f)(va_list);
} print_arg;

#endif
