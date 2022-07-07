#ifndef HEADER_PRINTF
#define HEADER_PRINTF

#include <stdarg.h> /* va_arg, va_list, va_end,*/
#include <stdlib.h> /* malloc */
#include <unistd.h> /* write */


int _printf(const char *format, ...); /* fonction principale */
int _print_char(va_list args); /* fonction pour print %c */
int _print_str(va_list args); /* fonction pour print %s */
int _print_percent(va_list args); /* fonction pour print % */
int _print_decimal(va_list args); /* fonction pour print %d */
int _print_int(va_list args); /* fonction pour print %i */
int _put_char(char c); /* print un caractère --> dans _print_char */
int _put_s(char str); /* print une string --> dans _print_str */
int _print_number(); /* print un entier --> dans _print_int et _print_decimal */

typedef struct types
{
	char *choice;
	int (*fonction)(va_list args);
}type_t;


#endif
