#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list lista;
	print_t print_type[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	int i = 0, j = 0;
	char *str = "";

	va_start(lista, format);

	while (format != NULL && format[i] != '\0')
	{
		while (print_type[j].op != NULL)
		{
			if (format[i] == print_type[j].op[0])
			{
				printf("%s", str);
				print_type[j].f(lista);
				str = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
}
/**
 * print_c - prints a character
 * @lista: character to be printed
 */
void print_c(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 * print_i - prints a character
 * @lista: character to be printed
 */
void print_i(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 * print_f - prints a character
 * @lista: character to be printed
 */
void print_f(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 * print_s - prints a character
 * @lista: character to be printed
 */
void print_s(va_list lista)
{
	char *s = va_arg(lista, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
