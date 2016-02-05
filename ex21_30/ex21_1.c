#include <stdio.h>

int main()
{
        int ary[2] = { 1000 , 2000 };
        int *po;

        po = &ary[0];
        printf("po\t = %x\n" , po);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
        po++;
        printf("po++\t = %x\n" , po);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘int *’
        printf("*po++\t = %d" , *po);
		// 配列の参照先が１つずれる1000 => 2000

        return 0;
}
