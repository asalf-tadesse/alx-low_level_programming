#include "main.h"

/**
 * main - check the code
 *
 * print diagonal 
 * 
 * Return: Always 0.
 */
void print_square(int n)
{
    int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
            	if (n <= 0)
                {
                   fputchar('\n'); 
                }
                else
                {
                    fputchar('#');
                }
		}
        fputchar('\n');	
	}
    return;
}
