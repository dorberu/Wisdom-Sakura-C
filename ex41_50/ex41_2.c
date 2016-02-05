#include <stdio.h>
#define DEBUG 0

int main() {
        #if DEBUG
                printf("Back To Your True Shape\n");
        #else
                printf("Back To Your False Shape\n");
        #endif
        printf("CLOW CARD");
        return 0;
}
