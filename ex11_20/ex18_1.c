#include <stdio.h>

int main()
{
        int ary[5] = { 1 , 10 , 100 , 1000 , 10000};
        int count;

        for(count = 0 ; count <= 4 ; count++)
                printf("要素番号ary[%d] = %d\n" , count , ary[count]);

        return 0;
}
