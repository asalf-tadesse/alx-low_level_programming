#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
* _isdigit - function that check if it's a digit
* @c: checks the digit
* Return: 1 if c is a digit and 0 otherwise
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
