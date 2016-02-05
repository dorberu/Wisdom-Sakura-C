#include <stdio.h>
#define ADD(m , n) ((m) + (n))

int main() {
        int a;
        a = ADD(2 * 5 , 9 / 3);
        printf("%d" , a);
        return 0;
}
