#include <stdio.h>

int main() {
        char str[16];
        printf("文字列を入力してください(10文字以内)>");
        scanf("%10[^\n]" , str);
        printf("入力された値 = %s" , str);

        return 0;
}
