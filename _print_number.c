#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

int _print_number(int n)
{
int  sum = 0;

if (n == 0)
return (0);
if (n < 0)
{
	sum = _put_char('-');
	n = n *(-1);
}
_print_number(n / 10);
_put_char((n % 10) + '0');
return (sum);
}

int _print_int(va_list args)
{
	int sum = 0, number, n = va_arg(args, int);

	if (n < 0)
	sum = 1;
	for (sum, number = n; number > 0; sum++)
	{
		number /= 10;
	}
	_print_number(n);
	return (sum);
}
