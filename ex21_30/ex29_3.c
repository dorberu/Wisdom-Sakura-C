#include<stdio.h>

void func(void);

int var = 10;

int main() {
        printf("main() : varのアドレス = %x\n" , &var);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
        printf("main() : varの内容 = %d\n" , var);
        func();
        var = 100;
        func();

        return 0;
}

void func() {
        printf("func() : varのアドレス = %x\n" , &var);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
        printf("func() : varの内容 = %d\n" , var);
}
