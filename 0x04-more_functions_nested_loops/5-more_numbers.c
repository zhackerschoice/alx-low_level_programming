#include "main.h"

/**
 * more_numbers - print 10 times
 * Return: loop nums except 2 and 4.
 */
void more_numbers(void)
{
char n;
char nn = '0';
char nnn[2] = {'1', '0'};
char nnnn[2] = {'1', '4'};
for (n = '0'; n <= nnn[2]; n++)
while (nn <= nnnn[2])
{
_putchar(n);
}
_putchar('\n');
}
