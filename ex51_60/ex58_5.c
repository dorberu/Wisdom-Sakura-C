#include <stdio.h>

int main() {
        int i , j;
        printf("二つの数を加算します\n");
        printf("数値を空白で区切って2つ入力してください>");
        scanf("%d%d" , &i , &j);

        printf("答えは = %d\n" , i + j);
        return 0;
}
