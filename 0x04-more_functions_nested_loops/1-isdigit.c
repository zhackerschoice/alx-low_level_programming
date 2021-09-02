#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - Checks for a digit
 * @c: The int value of character to evaluate
 *
 * Return: 1 if uppercase, other case 0.
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
