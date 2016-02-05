#include <stdio.h>

int main()
{
        short var1 = 32767;
        long var2 = 32768;
        unsigned short var3 = 40000;
        unsigned long var4 = 4294967295;
        long double var5 = 123456.789;

        printf("%hd\n",var1);
        printf("%ld\n",var2);
        printf("%u\n",var3);
        printf("%lu\n",var4);
        printf("%Lf\n\n",var5);

        printf("d/fのみの場合\n");
        printf("%d\n",var1);
        printf("%d\n",var2);
        printf("%d\n",var3);
        printf("%d\n",var4);
        printf("%f\n",var5);

        return 0;
}