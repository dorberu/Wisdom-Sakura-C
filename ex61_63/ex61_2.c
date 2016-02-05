#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
        int count;
        srand((unsigned)time( NULL ));
        for (count = 0 ; count < 10 ; count++) {
                printf("%d\n" , rand());
        }

        return 0;
}
