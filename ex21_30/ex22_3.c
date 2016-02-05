#include <stdio.h>

int main() {
        int ary[2][3] = {
                { 10 , 20 , 30 } ,
                { 40 , 50 , 60 } ,
        };
        int *ary_p;
        ary_p = (int *)ary;

        printf("間接参照 = %d,%d,%d\n" , *(ary_p + (1 * 3)) ,
		 *(ary_p + (1 * 3)+ 1) , *(ary_p + (1 * 3) + 2));
        printf("添え字指定 = %d,%d,%d" , ary[1][0] , ary[1][1] , ary[1][2]);
        return 0;
}
