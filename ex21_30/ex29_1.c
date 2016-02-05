#include<stdio.h>

void func(void);

int main() {
        int var = 10;
        printf("main()関数のvar = %d\n",var);
        func();
        printf("もう一度main()関数のvar = %d\n" , var);

        return 0;
}

void func() {
        int var = 5;
        printf("func()関数のvar = %d\n",var);
}
