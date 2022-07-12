#include "main.h"
/**
*_printf - print a char, string, int, dec ...
*@format: string with format specifier inside
*Return: length of the string
*/
int _printf(const char *format, ...)
{
	int index_f, str_f = 0;
	int (*ptr)(va_list);

	va_list (args);
	va_start(args, format);

	if (format == NULL)
	return (-1);
	if (format[0] == '%' && !format[1])
	return (-1);
	for (index_f = 0; format[index_f] != '\0'; index_f++)
	{
		if (format[index_f] != '%')
		{
			str_f += _put_char(format[index_f]);
		}
		else
		{
			ptr = match_format(format[index_f + 1]);
			index_f++;
			if (ptr == NULL) /* ptr n'a trouvé aucun format correspondant */
			{
				str_f += _put_char(format[index_f - 1]);
				str_f += _put_char(format[index_f]);
			}
			else
			{
				str_f += ptr(args); /* match_format(format[index_f + 1])(args)     */
			}
		}
	}
	va_end(args);
	return (str_f);
}
