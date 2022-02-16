#include "main.h"

/**
 * print_last_digit - print las digit of integer input
 * @n: integer to modify
 *
 * Return: 1
 */

int print_last_digit(int n)
{
int m, a;
a = n % 10;
if (a < 0)
a = -a;
m = '0' + a;
_putchar(m);
return (a);
}
