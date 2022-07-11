	#include "main.h" /* include all necessaries libraries */
/**
*_put_s - writes a string
*@str: string
*Return: string
*/
int _put_s(char *str)
{
	int c, str_s = 0;

	for (c = 0; str[c] != '\0'; c++)
		str_s += _put_char(str[c]);
	return (str_s);
}
