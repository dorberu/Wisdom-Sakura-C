#include <stdio.h>

int main()
{
        int count = 0;

        while (1) {
                printf("/");
                if (count == 25) printf("\n\t猫耳愛！\n");
                if (count == 50) break;

                count++;
        }
        printf("\nループを抜けました、プログラムを終了します");
        return 0;
}