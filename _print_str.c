#include "main.h"
/**
*_print_str - function for format "s"
*@args: format
*Return: arg_s
*/
int _print_str(va_list args)
{
	char *p = va_arg(args, char*);

	if (!p)
		p = "(null)";
	return (_put_s(p));
}
