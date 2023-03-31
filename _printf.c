#include "main.h"
#include <stdio.h>

/**
 *_printf - a function that produces output according to a format.
 *@format: is a character string. The format string is composed
 *of zero or more directives.
 *Return: the number of characters printed
 *(excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	int (*f)(va_list args);
	va_list args;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] != '\0')
				{
					f = get_op_func(format[i + 1]);
					if (f != NULL)
					{
						count += f(args), i += 2;
						continue;
					}
					else
					{
						_putchar('%'), i++;
						count++;
						continue;
					}
				}
				if (format[i + 1] == '\0')
					return (-1);
			}
			_putchar(format[i]);
			i++, count++;
		}
		if (format[i] == '\0')
			return (count);
	}
	else
		return (-1);
	va_end(args);
	return (0);
}
