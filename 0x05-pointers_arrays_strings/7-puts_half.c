#include "main.h"
/**
 * puts_half - prints the second half a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int j;
int i = 0;
while (*(str + i))
i++;
j = i / 2;
if (i % 2)
j += 1;
while (j < i)
{
_putchar(*(str + j));
j++;
}
_putchar('\n');
}
