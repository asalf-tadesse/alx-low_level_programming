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
	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
