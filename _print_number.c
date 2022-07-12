#include "main.h"
/**
 * _print_number - print an int
 * @n: int
 */

void _print_number(int n)
{

if (n == 0)
return;
if (n < 0)
{
	_put_char('-');
	n = n * (-1);
}
_print_number(n / 10);
_put_char((n % 10) + '0');
}

/**
 * _print_int - print an int
 *
 * @args: arg int printf function
 * Return: surm
 */
int _print_int(va_list args)
{
	int sum = 0, number, n = va_arg(args, int);

	if (n < 0)
	sum = 1;
	for (number = n; number > 0; sum++)
	{
		number /= 10;
	}
	_print_number(n);
	return (sum + 1);
}
