#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *
 *
 *
 */

int main(void)
{
char n;
int i;
for(i = 0 ; i <= 16 ; i++)
{
if (i <= 9)
{
putchar (i);
}
else
{
n = i % 16;
}
putchar ('n');
}
putchar ('\n');
return (0);
}
