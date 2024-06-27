#include <unistd.h>

void print_char(char c)
{
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


int main(int argc, char *argv[]) {

    char str[] = "exam";
  
    str_print(str);
    print_char('\n');
    
    return 0;
}
