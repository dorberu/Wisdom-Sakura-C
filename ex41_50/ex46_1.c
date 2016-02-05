#include <stdio.h>

int main() {
        int i;
        printf("int = %d : i = %d\ndouble = %d" ,
                sizeof(int) , sizeof i , sizeof(double));
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘long unsigned int’
		// 警告: format ‘%d’ expects type ‘int’, but argument 3 has type ‘long unsigned int’
		// 警告: format ‘%d’ expects type ‘int’, but argument 4 has type ‘long unsigned int’
        return 0;
}
