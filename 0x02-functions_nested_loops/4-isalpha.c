#include "main.h"

/**
 * _isalpha - checks for alphabetics characters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int int_isalpha(int c)
{
if (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
