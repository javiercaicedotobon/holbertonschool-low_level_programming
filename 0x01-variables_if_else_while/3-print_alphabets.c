#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - alphabets
 *
 *Return: return 0
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
putchar (i);
}
for (i = 'A' ; i <= 'Z' ; i++)
{
putchar (i);
}
putchar ('\n');
return (0);
}
