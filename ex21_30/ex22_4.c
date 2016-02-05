#include <stdio.h>

int main() {
        int ary[] = { 10,20,30,40,50 };
        int *ary_p;
        ary_p = ary;

        printf("ary[0] = %d\n" , ary_p[0]);
        printf("ary[1] = %d\n" , ary_p[1]);
        printf("ary[2] = %d\n" , ary_p[2]);
        printf("ary[3] = %d\n" , ary_p[3]);
        printf("ary[4] = %d\n" , ary_p[4]);
        return 0;
}
