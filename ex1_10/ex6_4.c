#include <stdio.h>

int main()
{
        int var1;
        int var2;

        printf("2つの数を比較します\n最初の数を入力してください\n");
        scanf("%d",&var1);
        printf("比較する数を入力してください\n");
        scanf("%d",&var2);

        if (var1 < var2) printf("%d は %d より小さいです",var1,var2);
        if (var1 > var2) printf("%d は %d より大きいです",var1,var2);
        if (var1 == var2) printf("%d と %d は等しいです",var1,var2);

        return 0;
}