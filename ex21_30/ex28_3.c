#include <stdio.h>

void func( char str[], int var);

int main() {
        func("kitty on your lap" , 9);
        return 0;
}

void func( char str[], int var) {
        printf("%s" , str + var);
}
