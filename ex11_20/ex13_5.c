#include <stdio.h>

int main()
{
        float var1 = 1234.5678f;

        printf("全体 = %f\n",var1);
        printf("実数 = %d\n",(int)var1);
        printf("小数 = %g\n",var1 - (int)var1);

        return 0;
}