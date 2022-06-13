#include "main.h"
#include <string.h>
/**
 * puts_half - function that print half of the string
 *
 * @str: string
 *
 * return: nothing
 */
void puts_half(char *str)
{
	int i, len;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i ++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else if(len  % 2 == 1)
	{
		for (i = (len / 2)-1; i < len; i ++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
