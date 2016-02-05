#include <stdio.h>

int main() {
        char str[] = "Kitty on your lap";
        int count ;

        for (count = 0 ; str[count] != 0 ; count++) {
                fputc(str[count] , stdout);
        }
        return 0;
}
