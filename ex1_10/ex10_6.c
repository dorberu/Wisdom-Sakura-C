#include <stdio.h>

int main()
{
        int bool1,bool2;

        printf("0か1を入力してください\n");
        scanf("%d",&bool1);
        printf("XORで否定します、0か1を入力してください\n");
        scanf("%d",&bool2);
        printf("答えは %d です",(bool1 || bool2) && !(bool1 && bool2));

        return 0;
}