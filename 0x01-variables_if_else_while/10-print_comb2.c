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
int a;
int b;
for (a = 48; a <= 57; a++)
{
for (b = 48; b <= 57; b++)
{
putchar(a);
putchar(b);
if (a && b != 57)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
