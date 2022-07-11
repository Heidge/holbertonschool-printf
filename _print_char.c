#include "main.h" /* include all necessaries libraries */
/**
*_print_char - function for format "c"
*@args: format
*Return: arg_c
*/
int _print_char(va_list args)
{
	int arg_c;

	arg_c = _put_char(va_arg(args, int));
	return (arg_c);
}
