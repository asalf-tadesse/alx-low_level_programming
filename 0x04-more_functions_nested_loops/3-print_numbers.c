#include "main.h"
#include <stdio.h>

/**
 * main : entry point
 *
 * @program that print 0 - 9
 *
 * return 0
 */
void print_numbers(void)
{
    char i;
    
    i = '0';
    while(i <= '9')
    {
        _putchar(i);
        _putchar('\n');
	i++;
    }
    return;
}
