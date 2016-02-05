#include <stdio.h>

int main()
{
        char ch;

        printf("半角英数で一文字入力してください\n");
        scanf("%c",&ch);

        if (ch == 'X') printf("Xが入力されました");
        else printf("X以外が入力されました");

        return 0;
}