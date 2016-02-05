#include <stdio.h>

void func(void);

int main() {
        int count;

        for (count = 0 ; count < 1000 ; count++) func();

        return 0;
}

void func() {
        int count = 1;
        printf("%d\n" , count);
        count++;
}
