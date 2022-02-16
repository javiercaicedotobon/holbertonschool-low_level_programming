#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
int i, j;
for (i = 00 ; i <= 24 ; i ++)
{
for (j = 00 ; j <= 59 ; j ++)
{
_putchar(i,j);
}
}
}
