#include <stdio.h>

int main() {
        char str[128];
        printf("数値を入力してください>");
        scanf("%[0123456789]" , str);

        printf("入力された値 = %s\n" , str);
        return 0;
}
