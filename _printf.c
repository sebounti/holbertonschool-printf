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
	int i = 0, count = 0; /*declaration des variables*/
	int (*f)(va_list args); /*declaration pointeur qui va parcourire la chaine format*/
	va_list args; /*Initialisation d'une liste d'arguments variable*/

	va_start(args, format);/*Initialise une liste d'arguments variables et le dernier argument connu format */

if (format != NULL) /* Vérifie que format n'est pas NULL*/
	if (format != NULL) /*Vérifie que "format" n'est pas nul*/
	{
		while (format[i] != '\0')/* boucle qui parcours format */
		{
			if (format[i] == '%')/* Vérifie si le caractère actuel est un '%' pour un format spécial */
			{ 
			{
				if (format[i + 1] != '\0') /* Vérifie s'il y a un caractère après le '%'*/
				{
				{
					f = get_op_func(format[i + 1]);/*appelle la fonction "get_op_func" pour obtenir pointeur de fonction*/
					if (f != NULL) /*Si un pointeur de fonction est valide */
					{
						count += f(args), i += 2;/*Appel du pointeur de fonction avec les arguments de la liste variable et ingrementation*/
						continue;
					}
					else /*si trouve pas de pointeur de fonction valide*/
					{
						_putchar('%'), i++;/*Affichage du caractère '%' et increnmentation du compteur "i"*/
						count++;
						continue;
					}
				}
				if (format[i + 1] == '\0')/* si le caractere apres % est nul renvoie -1*/
					return (-1);
			}
			_putchar(format[i]);/* Affichage du caractère */
			i++, count++;
		}
		if (format[i] == '\0')/* Tous les caractères de "format" ont été traités */
			return (count);/* Retourne le nombre de caractères affichés */
	}
	else
		return (-1);
	va_end(args);
	return (0);
}