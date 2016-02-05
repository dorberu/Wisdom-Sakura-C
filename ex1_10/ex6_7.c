#include <stdio.h>

int main()
{
        char ch;

        printf("半角英数で一文字入力してください\n");
        scanf("%c",&ch);

        if (ch == 'X') printf("Xが入力されました");
        else if (ch == 'G') printf("Gが入力されました");
        else printf("XとG以外の文字が入力されました");

        return 0;
}