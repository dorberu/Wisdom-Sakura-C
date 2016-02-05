#include <stdio.h>

int main()
{
        int ary[3];
        int count;

        for(count = 0 ; count <= 2 ; count++) {
                ary[count] = 10 * (count + 1);
                printf("%d\n",ary[count]);
        }

        return 0;
}