0. _putchar obligatorio
Escriba un programa que imprima Holberton, seguido de una nueva línea.

El programa debería regresar 0
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-holberton.c -o 0-holberton
julien@ubuntu:~/0x02$ ./0-holberton 
Holberton
julien@ubuntu:~/0x02$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x02-functions_nested_loops
Expediente: 0-holberton.c

1. A veces sufro de insomnio. Y cuando no puedo conciliar el sueño, juego lo que llamo el juego del alfabeto obligatorio
Escriba una función que imprima el alfabeto, en minúsculas, seguido de una nueva línea.

Prototipo: void print_alphabet(void);
Solo puedes usar _putchardos veces en tu código
julien@ubuntu:~/0x02$ cat 1-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x02-functions_nested_loops
Expediente: 1-alphabet.c

2. 10 x alfabeto obligatorio
Escriba una función que imprima 10 veces el alfabeto, en minúsculas, seguido de una nueva línea.

Prototipo: void print_alphabet_x10(void);
Solo puedes usar _putchardos veces en tu código
julien@ubuntu:~/0x02$ cat 2-main.c
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x02-functions_nested_loops
Expediente: 2-print_alphabet_x10.c

3. islower obligatorio
Escriba una función que verifique si hay caracteres en minúscula.

Prototipo: int _islower(int c);
Devuelve 1si ces minúscula
Devoluciones de lo 0contrario
FYI: La librería estándar proporciona una función similar: islower. Corre man islowerpara aprender más.

julien@ubuntu:~/0x02$ cat 3-main.c 
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x02-functions_nested_loops
Expediente: 3-islower.c