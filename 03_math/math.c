#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void print_char(char c) {
  write(1, &c, 1);
}

void str_print(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

void print_nb(int nb)
{
    
    if(nb == -2147483648)
    {
        print_char('-');
        print_char('2');
        nb = 147483648;
    }

    if (nb < 0)
    {
        nb = -nb;
        print_char('-');
    }

    if (nb >= 10)
    {
        print_nb(nb / 10);
        print_nb(nb % 10);
    }

    if (nb < 10)
    {
        print_char((nb + '0'));
    }

}

void tabla(int numero)
{
    
    str_print("Tabla de multiplicar del numero: ");
    printf("%d:\n", numero);
    int i, j;
    i = 1;

    while (i <= 10) {
        j = numero * i;
       
        print_nb(i);
        
        write(1, " x ", 3);
        print_nb(numero);
        write(1, " = ", 3);
        print_nb(j);
        
        if (j%2!=0)
        {
            char *str = " <Impar>";
            str_print(str);
        }
        else
        {
            char *ptr = " <Par>";
            str_print(ptr);
        }
        write(1, "\n", 1);
        i++;
    }

}

int main(int argc, char *argv[]) {
  
    if (argc != 2) {
        str_print("Error\n");
        return 1;
    }

    int numero = atoi(argv[1]);

    if (numero <= 0) {
        str_print("Error: El número debe ser positivo.\n");
        return 1;
    }
    
    tabla(numero);
    return 0;
}
