#include "main.h" /* include all necessaries libraries */

int _print_percent(va_list args)
{
	int arg_s;
	arg_s = _put_char (va_arg(args, int));
	return(arg_s);
}
