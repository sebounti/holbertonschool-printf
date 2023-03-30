
#include "main.h"
/**
 * _printf - print function
 *@i - browse the character string
 *@char_count - pointer that counts the number of characters
 *@str - store the character string
 *@str_len - store the length of the character string stored in the variable.
 *@format : pointer to the format string passed as an argument to the function
 *Return: char_count
 **/
int _printf(const char *format, ...)
{
    int i;
    char *str = "";
    char str_len;
    va_list arg_list;
    int char_count = 0;

 if (format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);

    va_start(arg_list, format);
        if (format == 0)
            return (0);

        while ((*format) != '\0')
        {
            if (*format != '%')
                {
                putchar(*format);
                char_count++;
                }
            else
            {
                format++;
                if (*format == 'c')
                    {
                    putchar(va_arg(arg_list, int));
                    char_count++;
                    }
                else if (*format == '%')
                    {
                    putchar('%');
                    char_count++;
                    }
                else if (*format == 's')
                str = va_arg(arg_list, char*);
                str_len = strlen(str);
                for (i = 0; i < str_len; i++)
                    {
                    putchar(str[i]);
                    char_count++;
                    }
            }
        format++;
        }
    va_end(arg_list);
    return (char_count);
}
