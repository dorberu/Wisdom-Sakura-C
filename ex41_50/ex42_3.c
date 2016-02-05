#include <stdio.h>
#define var(i) printf("var" #i " = %d\n" , var ## i)

int main() {
        int var1 = 10 , var2 = 20;
        var(1);
        var(2);

        return 0;
}
