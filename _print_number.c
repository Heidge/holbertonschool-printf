#include "main.h" /* include all necessaries libraries */
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 */

void print_numbers(void)

{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_put_char (n);
	}

	_put_char ('\n');
}
