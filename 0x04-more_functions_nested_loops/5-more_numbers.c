#include "main.h"
/**
 * more_numbers - function that checks for uppercase character
 * Return: 0
 */
void more_numbers(void)
{
int n = 0;
int n1 = 0;

while (n <= 9)
{
while (n1 <= 14)
	{
if (n1 > 9)
_putchar(n1 / 10 + '0');
_putchar(n1 % 10 + '0');
n1++;

}
_putchar('\n');
n++;
n1 = 0;
}
}
