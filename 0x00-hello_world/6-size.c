#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0
*/
int main(void)
{
long long int lng;
printf("Size of a char: %d byte(s)\n", (unsigned long) sizeof(char));
printf("Size of an int: %d byte(s)\n", (unsigned long) sizeof(int));
printf("Size of a long int: %d byte(s)\n", (unsigned long) sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lng));
printf("Size of a float: %d byte(s)\n", (unsigned long) sizeof(float));
return (0);
}
