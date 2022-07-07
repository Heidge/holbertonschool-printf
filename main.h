#ifndef HEADER_PRINTF
#define HEADER_PRINTF

#include <stdarg.h> // va_arg, va_list, va_end
#include <stdlib.h> // malloc
#include <unistd.h> // write


int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_decimal(va_list args);
int _print_int(va_list args);
int _putchar(char c);
int _puts(char *str);
int _print_number();
int _print_all();

typedef struct types
{
	char *choice;
	void (*fonction)(va_list args)
};


#endif
