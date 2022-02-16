#include "main.h"

/**
 * _islower - cheks for lowercase letters
 * @n: character to check
 *
 * Return: 0 or 1
 */

int _islower(int n)
{
if (n >= 'a' && n <= 'z')
return (1);
else
return (0);
}
