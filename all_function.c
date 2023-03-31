#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * printstr - print a string
 * @args: the String to print
 *
 * Return: i int
 */
int printstr(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
/**
 * printcharacter - print a char
 * @args: the char a print
 *
 * Return: i int
 */
int printchar(va_list args)
{
    char str;

	str = (va_arg(args, int));
    if (str == 0)
	{
		str = '\0';
    }
    _putchar(str);

	return (1);
}
/**
 * printint - print a int
 * @args: the char a print
 *
 * Return: i int
 */
int printint(va_list args)
{
	int count = 0, rest = 1, n;
	unsigned int x;

	n = va_arg(args, int);
	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
		++count;
	}
	while ((x / rest) > 9)
	{
		rest = rest * 10;
	}
	while (rest > 0)
	{
		_putchar(x / rest + '0');
		x = (x % rest);
		rest = rest / 10;
		++count;
	}
	return (count);
}
/**
 * printpercent - print percent
 * @args: argument type va_list
 *
 * Return: i int
 */
int printpercent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
