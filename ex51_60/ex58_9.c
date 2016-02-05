#include <stdio.h>

int main() {
        char str[128];
        printf("数値と文字列を入力してください>");
        scanf("%*d%[^\n]" , str);

        printf("入力された値 = %s" , str);

        return 0;
}
