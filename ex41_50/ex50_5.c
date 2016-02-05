#include <stdio.h>

int main() {
        register int i , d = 10000;

        for (i = 0 ; i < 10000 ; i++) {
                printf("i = %d : d = %d\n" , i , d);
                d--;
        }

        return 0;
}
