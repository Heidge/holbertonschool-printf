#include "main.h"

int _print_str(va_list args)
{
	int arg_s;
	arg_s = _put_s(va_arg(args, char *));
	return(arg_s);
}
