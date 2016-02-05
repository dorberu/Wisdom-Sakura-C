#include <stdio.h>

int main()
{
        int count = 1;
        int max;

        printf("繰り返す回数を指定してください\n");
        scanf("%d",&max);

        do {
                printf("%d回目のループです\r" , count);
                count++;
        } while (count <= max);

        printf("\nプログラムを終了します");
        return 0;
}