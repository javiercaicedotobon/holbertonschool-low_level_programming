#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always return 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("%d the string is greater than 5\n", n);
else if (n == 0)
printf("%d the string and is 0\n", n);
else if (n < 6 & n != 0)
printf("%d the string and is less than 6\n", n);
return (0);
}
