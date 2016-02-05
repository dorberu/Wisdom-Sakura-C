#include <stdio.h>

int main() {
        char str[128];
        printf("文字列を入力してください>");
        scanf("%[^\n]" , str);

        printf("入力された値 = %s\n" , str);
        return 0;
}
