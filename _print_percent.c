#include "main.h" /* include all necessaries libraries */

int _print_percent(va_list args)
{
	(void) args;
	_put_char('%');
	return(1);
}
