#include <stdio.h>
/**
 *main - entry
 *
 *Definition: program print alphabet not print e and q
 *
 *
 *Return: 0 (succecc)
 */
int main(void)
{
char a = 97;
while (a <= 122)
{
if (a == 101 || a == 113)
;
else
putchar(a);
a++;
}
putchar('\n');
return (0);
}
