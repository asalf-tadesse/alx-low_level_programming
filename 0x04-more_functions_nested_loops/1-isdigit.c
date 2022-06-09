#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main : entry point
 * 
 * @check whether the character c is digit or not
 * 
 * return 0
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
