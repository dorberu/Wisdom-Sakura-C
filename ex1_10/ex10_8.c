#include <stdio.h>

int main()
{
        int count;
        count = 0;

        for (;;) {
                count++;
                printf("%d回目のくり返しです\n",count);
                if (count >= 10) break;
        }
        return 0;
}