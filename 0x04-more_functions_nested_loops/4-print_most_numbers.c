#include "main.h"

/**
 * print_most_numbers - Print except 2 and 4
 * Return: loop nums except 2 and 4.
 */
void print_most_numbers(void)
{
char n;
n = '0';
while (n <= 9)
{
if (n != 2 && n != 4)
{
_putchar(n);
}
n++;
}
_putchar('\n');
}
