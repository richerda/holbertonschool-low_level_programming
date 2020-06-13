#include <stdio.h>
/**
 *main - entry point
 *
 *Definition: program that print numbers 00-99
 *
 *Return: 0 (success)
 */
int main(void)
{
int n1;
int n2;
for (n1 = 48; n1 <= 57; n1++)
{
for (n2 = 48; n2 <= 57; n2++)
{
putchar(n1);
putchar(n2);
if (n1 && n2 != 57)
{
putchar(',');
putchar(' ');
}
else
{
}
}
}
putchar('\n');
return (0);
}
