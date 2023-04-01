#include "main.h"

/**
 *get_op_func - pointer to adress where the instructions of a function
 *start (it takes a char from format, in this case our format[i + 1]),
 *and returns wether if it found a function (that takes the other parameter,
 *the list of variadic arguments), or NULL in cas if it didn't match.
 *@format: i + 1, which is the format specifier to check
 *Return: the counter from the functions passed when it matches
 */
int (*get_op_func(char format))(va_list args)
{
	fmt_t opp[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d}, /*fonction selectionne la bonne paire caractere pointeur*/
		{'i', print_d},
		{'%', print_m},
		{'\0', NULL}
	};
	int i;

	i = 0;
	while (opp[i].type != '\0')
	{
		if (opp[i].type == format)/*parcours tableau renvoie vers fonction spe*/
		{
			return (opp[i].print_type);
		}
		i++;
	}
	return (NULL);
}
