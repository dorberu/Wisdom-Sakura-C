#include <stdio.h>

int main()
{
        int bool1;

        printf("NOTで否定します、0か1を入力してください\n");
        scanf("%d",&bool1);
        printf("答えは %d です",!(bool1));

        return 0;
}