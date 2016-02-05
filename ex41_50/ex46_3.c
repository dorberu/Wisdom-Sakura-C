#include <stdio.h>

struct TEST {
        unsigned int bit:8 ;
}obj;

int main() {
        printf("obj = %d\n" , sizeof(obj));
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘long unsigned int’
        printf("struct TEST = %d" , sizeof(struct TEST));
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘long unsigned int’
        return 0;
}
