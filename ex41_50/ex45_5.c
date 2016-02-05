#include <stdio.h>

int main() {
        char str[1024];

        fprintf(stdout , "入力してください>");
        fscanf(stdin , "%s" , str);

        printf(str);
        return 0;
}
