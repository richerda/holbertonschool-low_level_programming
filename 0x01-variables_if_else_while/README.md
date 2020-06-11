0. Positivo algo es mejor que negativo nada obligatorio
Este programa asignará un número aleatorio a la variable ncada vez que se ejecute. Complete el código fuente para imprimir si el número almacenado en la variable nes positivo o negativo.

Puedes encontrar el código fuente aquí
La variable nalmacenará un valor diferente cada vez que ejecute este programa
Usted no tiene que entender lo que rand, srand, RAND_MAXlo hacen. Por favor no toque este código
El resultado del programa debe ser:
El número, seguido de
si el número es mayor que 0: is positive
si el número es 0: is zero
si el número es menor que 0: is negative
seguido de una nueva línea
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 0-positive_or_negative.c

1. El último dígito obligatorio
Este programa asignará un número aleatorio a la variable ncada vez que se ejecute. Complete el código fuente para imprimir el último dígito del número almacenado en la variable n.

Puedes encontrar el código fuente aquí
La variable nalmacenará un valor diferente cada vez que ejecute este programa
Usted no tiene que entender lo que rand, srandy RAND_MAXhacer. Por favor no toque este código
El resultado del programa debe ser:
La cadena Last digit of, seguida de
n, seguido por
la cadena is, seguida de
si el último dígito de nes mayor que 5: la cadenaand is greater than 5
si el último dígito de nes 0: la cadenaand is 0
si el último dígito de nes menor que 6 y no 0: la cadenaand is less than 6 and not 0
seguido de una nueva línea
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 1-last_digit.c

2. A veces sufro de insomnio. Y cuando no puedo conciliar el sueño, juego lo que llamo el juego del alfabeto obligatorio
Escriba un programa que imprima el alfabeto en minúsculas, seguido de una nueva línea.

Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puedes usar putchardos veces en tu código
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 2-print_alphabet.c

3. alphABET obligatorio
Escriba un programa que imprima el alfabeto en minúsculas y luego en mayúsculas, seguido de una nueva línea.

Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puedes usar putchartres veces en tu código
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 3-print_alphabets.c

4. Cuando estaba tomando esa sopa de letras, nunca pensé que pagaría obligatoriamente
Escriba un programa que imprima el alfabeto en minúsculas, seguido de una nueva línea.

Imprime todas las letras excepto qye
Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puedes usar putchardos veces en tu código
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 4-print_alphabt.c

5. Números obligatorios
Escriba un programa que imprima todos los números de un solo dígito de base 10 a partir de 0, seguido de una nueva línea.

Todo su código debe estar en la mainfunción
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 5-print_numbers.c

6. Numberz obligatorio
Escriba un programa que imprima todos los números de un solo dígito de base 10 a partir de 0, seguido de una nueva línea.

No tiene permitido usar ninguna variable de tipo char
Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Solo puedes usar putchardos veces en tu código
Todo su código debe estar en la mainfunción
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 6-print_numberz.c

7. Sonríe en el espejo obligatorio
Escriba un programa que imprima el alfabeto en minúscula en reversa, seguido de una nueva línea.

Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puedes usar putchardos veces en tu código
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 7-print_tebahpla.c

8. Hexadecimal obligatorio
Escriba un programa que imprima todos los números de la base 16 en minúsculas, seguido de una nueva línea.

Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puedes usar putchartres veces en tu código
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 8-print_base16.c

9. La paciencia, la persistencia y la transpiración hacen que una combinación inmejorable para el éxito sea obligatoria
Escriba un programa que imprima todas las combinaciones posibles de números de un solo dígito.

Los números deben estar separados por ,, seguidos de un espacio
Los números deben imprimirse en orden ascendente
Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Todo su código debe estar en la mainfunción
Solo puede usar putcharcuatro veces como máximo en su código
No tiene permitido usar ninguna variable de tipo char
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 9-print_comb.c

10. 00 ... 99 obligatorio
Escribe un programa que imprima los números del 00al 99.

Los números deben estar separados por ,, seguidos de un espacio
Los números deben imprimirse en orden ascendente, con dos dígitos.
Sólo se puede utilizar la putcharfunción (todas las demás funciones ( printf, puts, etc ...) está prohibido)
Solo puede usar putcharcinco veces como máximo en su código
No tiene permitido usar ninguna variable de tipo char
Todo su código debe estar en la mainfunción
julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 10-print_comb2.c -o 10-print_comb2
julien@ubuntu:~/0x01$ ./10-print_comb2 
00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99
julien@ubuntu:~/0x01$ 
Repo:

Repositorio de GitHub: holbertonschool-low_level_programming
Directorio: 0x01-variables_if_else_while
Expediente: 10-print_comb2.c