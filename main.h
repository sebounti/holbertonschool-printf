#define HEADER_FILE
#ifndef HEADER_FILE


/* ======= LIBRARIES ======= */

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* ======= STRUCTURES ====== */

/**
 * struct ptr - parameters and functions struct
 * @c: parameter indicator
 * @f: parameter function
 */
typedef struct ptr
{
	char *c;
	int (*f)(char *, int, va_list);
} ptr_ch;

/* === FUNCTIONS PROTOTYPES === */

/* _printf and parameter checker Functions*/
int _printf(const char *format, ...);
