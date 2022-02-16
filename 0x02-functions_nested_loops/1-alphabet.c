#include "main.h"
/**
 * print_alphabet - entry point
 *
 *Description: Print the alphabet with _putchar
 *
 * Return: void
 */

void print_alphabet(void)
{
char a;
for (a = 'a' ; a <= 'z' ; a++)
{
_putchar(a);
}
_putchar('\n');
}
