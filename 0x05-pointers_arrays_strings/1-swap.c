#include "main.h"
/**
 * swap_int - swaps the values od two integers
 * @a: integer 1
 * @b: integer 2
 *
 * */
void swap_int(int *a, int *b)
{
int c = *a;
*b = c;
*a = *b;
}
