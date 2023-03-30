#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/* _printf and parameter checker Functions */
int _putchar(char c);
int _printf(const char *format, ...);
int function(const char c, va_list li);

/* FUNCTIONS PROTOTYPES */
int _putchar(char);
int printchar(va_list args);
int printstr(va_list args);
int printint(va_list args);
int printpercent(va_list args);

/* STRUCTURE*/
typedef struct get_f
{
	char type;
	int (*f)(va_list ptr);
} get;

/* Strings Functions */
int _strlen(char* str);


#endif
