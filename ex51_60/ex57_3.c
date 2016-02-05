#include <stdio.h>

int main() {
        printf("%ld\n" , 0x7fffffff);
		// 警告: format ‘%ld’ expects type ‘long int’, but argument 2 has type ‘int’
        printf("%hd\n" , 0x7fffffff);
        return 0;
}
