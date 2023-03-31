# holbertonschool-printf

## DESCRIPTION
**Holberton School's "printf" project is a C programming exercise to create a custom function that mimics the behavior of the printf() function in the standard C library.**

**The printf() function is commonly used to display formatted strings in standard output, such as the console or a file. The goal of this project is to understand how the printf() function works by creating a custom version of this function that provides the same functionality and formatting options.**

**The "printf" project consists of creating a function named "_printf.c" that takes as input a formatted string (like the one used with printf()) and produces the same output as printf(). The "_printf.c" function must be able to handle type conversions, such as integers, floats and strings, as well as formatting options, such as width and precision specifiers.**





## MAN PAGE PRINTF
Create the files for the manuel printf
> man_3_printf


## CARACTERES SPECIFICATEURS 
![Codesformat](https://user-images.githubusercontent.com/122387449/228476864-4416d0e8-857d-4b2e-9add-567dc91a6745.png)





## SPECIFICATEURS
***Between % is the format specifier you can place, in order :***

***Flags (in any order), which modify the specification:***
***These flags can be used in any order and can modify the format specifier in various ways. Some common flags include:***

1. "-" : left-align the output within the specified width.
2. "+" : always prefix the output with a sign (+ or -).
3. " " : prefix the output with a space character if it is positive.
4. "0" : pad the output with leading zeros instead of spaces.
5. "#" : add an alternate form of output for certain format specifiers (e.g. add "0x" prefix for hexadecimal output).
6. "*" : the width or precision of the output is specified by an integer argument passed as an additional argument to the function.

## FLOWCHART


## COMPILATION 
> gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

## CONVERSION SPECIFIER ▲

### A character indicates the type of conversion to perform. The conversion specifiers and their meanings are:

### d, i
The int argument is converted to a signed decimal number. If precision is specified, it represents the minimum number of digits that should appear. If the conversion provides fewer digits, the result is left-padded with zeros. By default, precision is 1. When 0 is converted with a precision of 0, the output is empty.
### o, u, x, X
The unsigned int argument is converted to an unsigned octal number (o), an unsigned decimal number (u), or an unsigned hexadecimal number (x and X). The letters abcdef are used for conversions with x, while ABCDEF are used for conversions with X. If precision is indicated, it represents the minimum number of digits to appear. If the converted value requires fewer digits, it is left-padded with zeros. By default, precision is 1. When 0 is converted with a precision of 0, the output is empty.


