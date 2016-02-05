#include <stdio.h>

int main() {
        char str[] = "kitty on your lap";

        printf("str[0]の内容\t\t= %c\n" , *str);
        printf("str[0]のアドレス\t= %x" , str);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘char *’

        return 0;
}
