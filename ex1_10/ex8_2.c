#include <stdio.h>

int main()
{
    int count;
    int max;
    
    printf("ループ回数を指定してください\n");
    scanf("%d", &max);
    
    printf("%dが入力されました\n", max);
    
    for (count = 0; count < max; count++) {
        printf("%d回目です\n", count);
        if (count == 5000) {
            printf("5000回目を越えたので強制終了します\n");
            count = max;
        }
    }
    printf("ループを抜けました");
    return 0;
}