#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Function checks is a capital letter
 *
 * @c: character to be checked
 *
 * Return: 1 if c is letter 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
