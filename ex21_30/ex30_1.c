#include<stdio.h>

void func(int );

int main() {
        func(0);

        printf("プログラムを終了します");
        return 0;
}

void func(int max) {
        if (max <= 10000) {
                printf("%d\r",max);
                func(max + 1);
        }
}
