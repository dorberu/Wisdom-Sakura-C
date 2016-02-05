#include <stdio.h>
#define ARYMAX 5


int main() {
        int ary[ARYMAX] , count;
        for (count = 0 ; count < ARYMAX ; count++) {
                #define DEF 10
                ary[count] = DEF + count;
                printf("%d " , ary[count]);
        }
        return 0;
}
