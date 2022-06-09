#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main : entry point
 * 
 * more_numbers 10 times form 0-14
 * 
 * return 0
 */
void more_numbers(void)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        char j;
        for (j = 0; j <= 14; j++)
        {
            if (j > 9)
            _putchar((j / 10) + '0');
            _putchar((j % 10) + '0');
        }
        fputchar('\n');
    }
    return;
}
