#include <stdio.h>

int main() {
        char ch;
        printf("文字を入力してください>");
        ch = getchar();
        printf("入力された値 = ");
        putchar(ch);
        return 0;
}
