#include "main.h"

int _printf(const char *format, ...)

{
	int index_f;
	int str_f;

	va_list (args);
	va_start (args, format);

	for(index_f = 0; format[index_f] != '\0'; index_f++)
	{
		if (format[index_f] != '%')
		{
			str_f += _put_char (format[index_f]);
		}
		else if (format[index_f + 1] == 'c')
		{
			str_f += _print_char(args);
			index_f++;
		}
	}
	va_end (args);
	return (str_f);

}
