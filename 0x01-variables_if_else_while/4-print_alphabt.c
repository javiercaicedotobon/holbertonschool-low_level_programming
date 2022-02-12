#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - alphabt
 *
 *Return: return 0
 */
int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i == 'e' || i == 'q')
{
i = i;
}
else
{
putchar (i);
}
}
putchar ('\n');
return (0);
}
