#include <stdio.h>
/**
 *main - Entry poin
 *
 *return: Always 0 (Success)
 */
int main(void)
{
printf("size of a char: %i bytes(s)\n", (int) sizeof(char));
printf("size of an int: %i bytes(s)\n", (int) sizeof(int));
printf("size of a long int: %i bytes(s)\n", (int) sizeof(long int));
printf("size of a long long int: %i bytes(s)\n", (int) sizeof(long long int));
printf("Size of a float: %i byte(s)\n", (int) sizeof(float));
return (0);
}
