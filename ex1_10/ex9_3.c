#include <stdio.h>

int main()
{
        int count = 0;

        while (count <= 50) {
                printf("/");
                if (count == 25) printf("\n\t猫耳愛！\n");

                count++;
        }
        printf("\nループを抜けました、プログラムを終了します");
        return 0;
}