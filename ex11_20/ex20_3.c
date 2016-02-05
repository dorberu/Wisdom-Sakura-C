#include <stdio.h>

int main()
{
        int *po , var;
        var = 100;
        po = &var;

        *po = 1010;
        printf("変数varの値 = %d" , var);

        return 0;
}
