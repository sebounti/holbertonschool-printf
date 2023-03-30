#include "main.h"
#include <stdarg.h>
/**
 * get_function - fun
 * @s: char to define fun
 * @args: va_list
 * Return: int
 */
int function(const char s, va_list args)
{
	int i = 0, count = 0;
	get get_f[]= {
		{'c', printchar},
		{'s', printstr},
		{'d', printint},
		{'i', printint}};
    
	while (get_f[i].type != 0)
	{
		if (get_f[i].type == s)
		{
			count = count + get_f[i].f(args);
			return (count);
		}
		i++;
	}
	if (get_f[0].type!= s)
	{
		_putchar('%');
		_putchar(s);
		return (2);
	}
	return (0);
}
