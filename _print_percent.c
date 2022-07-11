#include "main.h" /* include all necessaries libraries */
/**
*_print_percent - function for format "%"
*@args: void format because we want only a %
*Return: 1
*/
int _print_percent(va_list args)
{
	(void) args;
	_put_char('%');
	return (1);
}
