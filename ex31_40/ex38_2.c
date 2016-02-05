#include <stdio.h>

struct {
        char *str;
        unsigned code: 4;
        unsigned bool: 1;
}obj;

int main() {
        obj.str = "kitty on your lap";
        obj.code = 0xFF;
        printf("%d" , obj.code);

        return 0;
}
