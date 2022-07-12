#include "main.h" /* include all necessaries libraries */
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_number(int n)
{
int sum = 0;

if (n < 0)
{
	sum = _put_char('-');
	n = n *(-1);
}
print_number(n / 10);
}

