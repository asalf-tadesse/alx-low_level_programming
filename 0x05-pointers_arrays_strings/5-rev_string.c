#include "main.h"
#include <string.h>
/**
 * rev_string - function that prints revers string
 *
 * s: string
 *
 * return: nothing
 *
 */
void rev_string(char *s)
{
	int i, len, tmp;

	len = strlen(s);
	for (i = 0; i < len/2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i -1] = tmp;
	}
}
