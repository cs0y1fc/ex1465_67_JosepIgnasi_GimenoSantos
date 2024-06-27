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

void *str_inv(char *str) {

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int i = len - 1;
    while (i >= 0) {
        print_char(str[i]);
        i--;
  }
    write(1, "\n", 1);
}


int main(int argc, char *argv[]) {
    if (argc == 1) {
        print_char('\n');
        return 0; 
    }

    int i;
    i = 1;
    while ( i < argc ){
        if (i%2!=0)
        {
            char *str = argv[i];
            str_print(str);
        }
        else
        {
            char *ptr = argv[i];
            str_inv(ptr);
        }

        i++;
    }

    
    return 0;
}