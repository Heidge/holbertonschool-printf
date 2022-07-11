#ifndef HEADER_PRINTF
#define HEADER_PRINTF
#include <stdarg.h> /* va_arg, va_list, va_end,*/
#include <stdlib.h> /* malloc */
#include <unistd.h> /* write */
#include <stdio.h>
/**
 * _print_char - function for format "c"
 * _print_str - function for format "s"
 * _print_percent - function for format "%"
 * _print_int - function for format "i" or "d"
 * _put_char - putchar function
 * _put_s - puts function
 * @format: - string with format specifier inside
 * Return: length of string or char
 */

int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_percent(va_list args);
int _print_int(va_list args);
int _put_char(char c);
int _put_s(char *str);
int (*fnc(char j))(va_list);

/**
 * struct types - array
 * @choice: format char specifier
 * @f: function matching with format specifier
 */

typedef struct types
{
	char *choice;
	int (*f)(va_list args);
} type_t;

#endif
