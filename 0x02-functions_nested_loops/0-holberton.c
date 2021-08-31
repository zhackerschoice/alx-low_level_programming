#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char holberton[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
unsigned int alpha;
for (alpha = 0; alpha < sizeof(holberton); alpha++)
{
_putchar(holberton[alpha]);
}
_putchar('\n');
return (0);
}
