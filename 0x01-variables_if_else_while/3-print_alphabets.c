#include <stdio.h>
/**
 *main - entry
 *
 *Definition: program print alphabet in lowercase and uppercase
 *
 *Return: 0
 */
int main(void)
{

char a = 'a';
char b = 'A';
while (a <= 'z')
{
putchar(a);
 a++;
}
while (b <= 'Z')
{
putchar(b);
 a++;
}
putchar('\n');
return (0);
}
