#include "main.h"

/**
 *_strlen - string lenght counter
 *@s: pointer to string
 *Return: number of characters counted
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;
	return (c);
}
/**
 *print_c - print a character
 *@args: variadic list of argument passed
 *Return: 1 (in this case because of the char printed)
 */
int print_c(va_list args)
{
	char argu = va_arg(args, int);

	_putchar(argu);
	return (1);
}
/**
 *print_s - print a string
 *@args: variadic list of argument passed
 *Return: number of charcters of string
 */
int print_s(va_list args)
{
	char *s = va_arg(args, char *);
	int i;

	if (s == NULL)
	{
		s = "(null)";
	}
	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
/**
 *print_d - Prints an integer.
 *@args: variadic list of argument passed
 *Return: number of digits passed
 */
int print_d(va_list args)
{
	unsigned int deci, digi, natu;
	int n = va_arg(args, int);
	int count = 0;
	double f = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			natu = -n;
			count++;
		}
		else
			natu = n;

		while (f <= natu)
			f = f * 10;

		deci = f / 10;

		while (deci >= 1)
		{
			digi = natu / deci;
			_putchar(digi + '0'), count++;
			natu = (natu - (deci * digi));
			deci = deci / 10;
		}
	}
	return (count);
}
/**
 *print_m - print module
 *@args: variadic list of argument passed (unused)
 *Return: 1 (because is an once print)
 */
int print_m(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

