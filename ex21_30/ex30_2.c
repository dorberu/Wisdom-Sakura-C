#include<stdio.h>

void func1(int );
void func2(int );

int main() {
        func1(0);

        return 0;
}

void func1(int max) {
        if (max <= 100) {
                printf("%d",max);
                func2(max + 1);
        }
}

void func2(int max) {
        printf(" ");
        func1(max + 1);
}
