#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/* STRUCTURES */

/**
 * struct ptr - parameters and functions struct
 * @c: parameter indicator
 * @f: parameter function
 */

/* FUNCTIONS PROTOTYPES */

/* _printf and parameter checker Functions */
int _printf(const char *format, ...);


/* Strings Functions */
int _strlen(char* str);
#endif
