#include <stdio.h>
#define DEBUG

int main() {
        #ifdef DEBUG
                printf("Back To Your True Shape\n");
        #else
                printf("Kitty on your lap\n");
        #endif
        printf("CLOW CARD");
        return 0;
}
