#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main : entry point
 * 
 * @check whether the character c is upper or not
 * 
 * return 0
 */
int _isupper(int c)
{
    if (isupper(c))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
