#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list ap);
int print_i(va_list ap);
int print_f(va_list ap);
int print_s(va_list ap);
/**
 * struct op - struct
 * @c: character to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list ap);
} strucprint;

#endif
