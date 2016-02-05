#include <stdio.h>

int main()
{
        char *po;
        int var1 , var2;

        var1 = 1028;
        po = &var1;     /*char型のポインタにint型の変数のアドレスを代入*/
		// 警告: assignment from incompatible pointer type
        var2 = *po;     /*ここで間違った値がコピーされる*/

        printf("%d", var2);
        return 0;
}
