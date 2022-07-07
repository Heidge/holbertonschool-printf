	#include "main.h" /* include all necessaries libraries */

/**
 * _puts - print a string
 *
 * @str: string random
 */
int _put_s(char *str)
{
	int c, str_s;

	for (c = 0; str[c] != '\0'; c++)
	{
		str_s = _put_char(str[c]);
		str++;
	}
	return(str_s);
}
