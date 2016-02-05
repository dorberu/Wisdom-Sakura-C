#include <stdio.h>
#define ADD(m , n) m = m + n

int main() {
        int a = 0;
        ADD(a , 10);

        printf("%d" , a);
        return 0;
}
