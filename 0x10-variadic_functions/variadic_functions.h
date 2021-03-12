#ifndef _VARIADIC_FUNCTION_H
#define _VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *op;
	void (*f)(va_list);
} print_t;

void print_all(const char * const format, ...);
void print_c(va_list lista);
void print_i(va_list lista);
void print_f(va_list lista);
void print_s(va_list lista);

#endif /* _VARIADIC_FUNCTION_H */
