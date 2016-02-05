#include <stdio.h>

int main()
{
        char str[3] = { 'A' , 'B' , 127};
        int count;

        for (count = 0 ; count <= 2 ; count++) {
                printf("str[%d]のメモリアドレス = %x\n" , count , &str[count] );
				// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 3 has type ‘char *’
        }
        return 0;
}
