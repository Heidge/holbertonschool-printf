#include "main.h"

int _print_char(va_list args)
{
	int arg_s;
	arg_s = _put_s(va_arg(args, int));
	return(arg_s);
}
