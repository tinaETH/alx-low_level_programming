#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */
/** randome numbers to the screen then tells the user if it s
         * positive, nagative o r zero.*/
/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	 if ( n > 0)
                printf("%d is Positive\n", n);
        else if (n == 0)
                printf("%d is Zero\n", n);
        else
                printf("%d is Negative\n", n);

	return (0);
}
