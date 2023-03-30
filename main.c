#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    
    _printf("Test un première phrase\n");
    _printf("Ma variable Char doit sortir la lettre C\n\n");
    _printf("css%ccs%scscscs", 'T', "Test");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("Should print a single percent sign: %%\n");
    _printf("%%");
    _printf("%");
    _printf("%!\n");
    _printf("%K\n");
    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    _printf("css%ccs%scscscs", 'T', "Test");
    _printf("Très bien, faisons une boucle for \"Affichier les lettres de A à Z\"\n\n");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    _printf(NULL);
    
    return (0);
}
