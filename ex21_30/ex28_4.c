#include <stdio.h>

char* func(void);

int main() {
        char *str;
        str = func();

        printf("%s",str);

        return 0;
}

char* func() {
        return "kitty on your lap";
}
