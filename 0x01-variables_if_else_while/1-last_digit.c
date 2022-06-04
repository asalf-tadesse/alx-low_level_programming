#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int n;
	int less;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        less = n % 10;
	
        if (less > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, last);

        }
        else if (last == 0)
        {
                printf("Last digit of %d is %d and is 0", n, less);

        }
        else if (less < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, less);
	
	}
        return (0);
}

