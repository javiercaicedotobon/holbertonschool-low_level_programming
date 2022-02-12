#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - base16
 * Description: Print base16
 * Return: 0
 */

int main(void)
{
unsigned char n = '0';
int i;
for (i = 0 ; i < 10 ; i++)
{
putchar(n);
n++;
}
n = '1';
for (i = 0; i < 6; i++)
{
putchar('0' + n);
n++;
}
putchar ('\n');
return (0);
}
