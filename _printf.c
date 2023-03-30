
#include "main.h"
/**
 * _printf - print function
 *@i - browse the character string
 *@char_count - pointer that counts the number of characters
] *@format : pointer to the format string passed as an argument to the function
 *Return: char_count
 **/
int _printf(const char *format, ...)
{
    int i = 0, fun = 0, char_count = 0;
    va_list args;

 if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(args, format);
        if (format == 0)
            return (0);

        while (format[i])
        {
            if (format[i] != '%')
                {
                putchar(*(format + i));
                char_count++;
                }
            if(format[i] == '%')
		    {
			fun = function(format[i + 1], args);
			if (fun != 0)
			    {
				char_count = char_count + fun;
				i = i + 2;
				continue;
                }
			if (format[i] == '\0')
			    {
				_putchar(format[i]);
				char_count++;
			    }
		    }
			i++;
        }
    va_end(args);
    return (char_count);
}
