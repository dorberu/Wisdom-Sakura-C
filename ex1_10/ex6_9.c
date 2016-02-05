#include <stdio.h>

int main()
{
        int var;
        printf("0か1の値を入力してください>");
        scanf("%d" , &var);
        printf("%s" , var ? "真です" : "偽です");

        return 0;
}