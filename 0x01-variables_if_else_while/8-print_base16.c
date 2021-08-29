#include <stdio.h>

/**
* main - Prints a text according number
*
* Return: Always (Success)
*/
int main(void)
{
char alpha;
int num;

for (num = '0'; num <= '9'; num++)
putchar(num);
for (alpha = 'a'; alpha <= 'f'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
