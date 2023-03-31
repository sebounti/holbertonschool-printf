#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>

/* _printf and parameter checker Functions */
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_op_func(char format))(va_list args);

/* FUNCTIONS PROTOTYPES */
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_m(va_list args);

/* STRUCTURE*/
typedef struct format_t
{
	char type;
	int (*print_type)(va_list args);
} fmt_t;

/* Strings Functions */
int _strlen(char *str);


#endif
