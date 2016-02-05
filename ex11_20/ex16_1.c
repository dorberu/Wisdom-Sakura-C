#include <stdio.h>

int main()
{
        int ary[2][2];

        ary[0][0] = 10;
        ary[0][1] = 100;
        ary[1][0] = 1000;
        ary[1][1] = 10000;

        printf("%d\n%d\n" , ary[0][0] , ary[0][1]);
        printf("%d\n%d" , ary[1][0] , ary[1][1]);

        return 0;
}
