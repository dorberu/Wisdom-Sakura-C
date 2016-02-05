#include <stdio.h>

int main()
{
        int *po , var;
        var = 10101;
        po = &var;

        printf("ポインタに格納されている内容 = %d\n" , *po);
        printf("ポインタに格納されているアドレス = %x" , po);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’

        return 0;
}
