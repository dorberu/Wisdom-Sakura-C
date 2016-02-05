#include <stdio.h>

int main()
{
        int ans;
        int get_int;

        printf("値を入力してください\n");
        scanf("%d",&get_int);

        ans = (get_int == 10);     /*条件式の判定を変数ansに代入*/
        printf("ans = %d" , ans);

        return 0;
}