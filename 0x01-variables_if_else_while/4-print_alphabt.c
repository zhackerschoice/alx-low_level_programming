#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha, e, q;

e = 'e';
q = 'q';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != e && alpha != q)
putchar(alpha);
}
printf("\n");

return (0);
}
