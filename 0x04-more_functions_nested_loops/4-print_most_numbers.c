#include "main.h"
#include <stdio.h>

/**
 * main : entry point
 *
 * print_most_numbers except 2 & 4
 *
 * return 0
 */
void print_most_numbers(void)
{
    char i;
    
    i = '0';
    while(i <= '9')
    {
        if (i != '2' && i != '4')
        {
        _putchar(i);
        _putchar('\n');
        }
	i++;
    }
    return;
}
