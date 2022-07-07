#include "main.h" /* include all necessary libraries. */

int _printf(const char *format, ...)

{
	type_t array[] =  /* Structure of format */
	{
		{"c",_print_char},
	};


	int index_f;
	int str_f;

	va_list (args);
	va_start (args, format);

	for (index_f = 0; format[index_f] != '\0', index_f++);

		if (format[index_f] != '%')
		{
			str_f += _put_char (format[index_f]);
		}

		else if (format[index_f + 1] == 'c')
		{
			str_f += _print_char(args);
		}

		va_end (args);
		printf ("\n");

}
