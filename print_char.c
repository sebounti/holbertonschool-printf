#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *printf_char - print caracter
 *@args: argument
 *Return: 
 */
int printf_char(va_list args)
{
    char c =  va_arg(args, int);
    putchar(c);
    return 1; 
}
