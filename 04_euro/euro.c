#include <unistd.h>
#include <stddef.h>

void print_char(char c) {
  write(1, &c, 1);
}

void str_print(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

void euro(char *primero, char *segundo){
    char *str1 = "Spain";
    char *str2 = "Croatia";
    char *str3 = "Italy";
    char *str4 = "Albania";

    if(*primero == *str1)
    {
        if(*segundo == *str2 || *segundo == *str3)
        {
            write(1, "1", 1);
        } else
        {
            str_print("Arguments Error\n");    
        }
    } else if (*primero == *str4)
    {
        if (*segundo == *str1)
        {
            write(1, "2", 1);
        }
        else {
            str_print("Arguments Error\n");
        }
    } else {
        str_print("Arguments Error\n");
    }
}


int main(int argc, char *argv[]) {
    if (argc != 3) {
        str_print("Arguments Error\n");
        return 1; 
    }

    char *primero = argv[1];
    char *segundo = argv[2];


    euro(primero, segundo);

    return 0;
}