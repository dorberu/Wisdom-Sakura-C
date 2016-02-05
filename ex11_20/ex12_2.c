#include <stdio.h>

int main()
{
        signed char var;

        printf("数を入力してください\n");
        // %dがunsignedとして入力を受け付けるが、varがsignedにする
        scanf("%d",&var);
        printf("結果 = %d",var);

        return 0;
}