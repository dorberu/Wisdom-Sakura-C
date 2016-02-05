#include <stdio.h>

int main() {
        char str[256];

        printf("入力してください>");
        fgets(str , 256 , stdin);
        fputs(str , stdout);

        return 0;
}
