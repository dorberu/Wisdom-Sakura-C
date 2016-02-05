#include <stdio.h>

void func ( char list);

int main() {
        int list;
        printf("関数に渡す値を入力してください>");
        scanf("%d",&list);
        func(list);             /*変数listが関数に渡される*/

        return 0;
}

void func( char list ) {
        printf("渡された値は%dです" , list );
}
