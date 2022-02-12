#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - print_comb
 * Description: print comb
 * Return: 0
 */

int main(void)
{
int i;
for (i = 10; i < 20; i++)
{
putchar((i % 10) + '0');
if (i != 19)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
