#include <stdio.h>

int main()
{
        int count = 0;

loop:
        printf("強制的に繰り返します\n");
        count++;
        if (count >= 10) goto end;
        goto loop;
end:
        printf("プログラムを終了します");
        return 0;
}