#include<stdio.h>

void func(void);

int main() {
        int var;
        printf("main()関数のvar = %x\n" , &var);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
        func();

        return 0;
}

void func() {
        int var;
        printf("func()関数のvar = %x" , &var);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
}
