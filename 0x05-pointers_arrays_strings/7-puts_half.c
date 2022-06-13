#include "main.h"
/**
 * puts_half: function that print half of the string
 *
 * @str string as an argument
 *
 * return nothing
 */
void puts_half(char *str)
{
	int i, len, half;
	len = strlen(str);
	for (i = len/2; i < len; i ++)
	{
		_putchar(str[i]);
	}
}
