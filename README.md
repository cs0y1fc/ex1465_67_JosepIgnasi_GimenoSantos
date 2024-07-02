# Examen de C



## - 01
> Escribe un programa, que muestre por pantalla “exam” seguido de un salto de línea si encuentra un dígito en los argumentos. Si no encuentra un dígito tu programa mostrará “exam” seguido de un salto de línea. Además si tu programa no encuentra argumentos mostrará “exam” seguido de un salto de línea.
```
  $> ./exam Hola2 | cat -e
exam$

$> ./exam 1 3 4 | cat -e
exam$

$> ./exam “Hello” | cat -e
exam$

$> ./exam
exam$

$>
```



## - 02
> Escribe un programa, que muestre uno a uno por la salida estándar los caracteres de un string, seguido de una nueva línea. Tu programa debe poder recibir argumentos de entrada. Si el argumento es impar, tu programa mostrará por pantalla los caracteres del string en orden natural, en cambio si el argumento es par, tu programa lo mostrará en orden inverso a la lectura. Una palabra es una sección de una cadena delimitada por espacios o por el inicio/final de la cadena. Si el número de parámetros no es 1, o si no hay palabras, simplemente muestre una nueva línea.

```
$> ./prints_strs “HELLO WORLD” | cat -e
HELLO WORLD$

$> ./prints_strs Hello World | cat -e
Hello$
dlroW$

$> ./prints_strs “ ” | cat -e
$

$> ./prints_strs “a” “b” | cat -e
a$
b$

$> ./prints_strs “ lorem,ipsum ” hello world PaLLaP | cat -e
lorem,ipsum$
olleh$
world$
PallaP$

$>
```


## - 03
> Escribe un programa, que reciba un número estrictamente entero positivo a través de los parámetros de entrada. Se precisa realizar una tabla de multiplicar en base decimal de 1 a 10, y comprobará si el resultado es impar a par. También se guardará el resultado de la operación en un array en el orden de las operaciones. Se mostrará por pantalla la operación realizada, su resultado y con el resultado de “Impar” “Par”, seguido de un salto de línea. A continuación se mostrará “Array de resultados:” seguido de un salto de línea. Y para finalizar se mostrará los valores del array finalizando con salto de línea. El argumento de entrada se convertirá a integer con atoi(); esta función está incluida en la librería del sistema stdlib.h. Si el programa no recibe ningún número, se mostrará “Error”.

```
char c = '5';

int x = atoi(c);
x = x + 9;
x => 14;
```
```
$> ./math "  " | cat -e
Error$

$> ./math "8" "4" | cat -e
Error$

$> ./math 9 | cat -e
1 x 9 = 9 <Impar>$
2 x 9 = 18 <Par>$
3 x 9 = 27 <Impar>$
4 x 9 = 36 <Par>$
5 x 9 = 45 <Impar>$
6 x 9 = 54 <Par>$
7 x 9 = 63 <Impar>$
8 x 9 = 72 <Par>$
9 x 9 = 81 <Impar>$
10 x 9 = 90 <Par>$
$
Array de resultados:$
9, 18, 27, 36, 45, 54, 63, 72, 81, 90$

$>
```


## - 04
> Escribe un programa, que tome dos argumentos de entrada. El programa mostrará a modo de quiniela el resultado de España en la Eurocopa de fútbol masculino de 2024. Los argumentos los tomará en el orden en que ha jugado España y en inglés; “Spain”, “Croatia”, “Italy”, “Albania”. Los partidos jugados son: España 3 - Croacia 0; España 1 - Italia 0; y Albania 0 - España 1. El resultado a modo quiniela: “1” en caso de que gane el equipo local, “X” en caso de empate y “2” en caso de que gane el equipo visitante. Si el programa no recibe dos argumentos o son diferente a los esperados mostrará “Arguments Error” seguido de un salto de línea.

```
$> ./euro | cat -e
Arguments Error$

$> ./euro " " | cat -e
Arguments Error$

$> ./euro "Espana " "Italy" | cat -e
Arguments Error$

$> ./math "Spain" "France" | cat -e
Arguments Error

$> ./math "Italy" "Spain" | cat -e
Arguments Error

$> ./math "Albania" "Spain" | cat -e
2$

$> ./math "Spain" "Croatia" | cat -e
1$
```
