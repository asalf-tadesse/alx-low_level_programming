#include "main.h"
/**
 * puts2 : function that prints every other characters
 *
 * @str variable argument
 *
 * return nothing
 *
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i < len; i+=2)
	{
		_putchar(str[i]);
	}
}
