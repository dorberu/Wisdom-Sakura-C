#include <stdio.h>

int main() {
        char ch;
        int i;
        printf("%d" , sizeof i + ch);
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘long unsigned int’
		// 警告: ‘ch’ is used uninitialized in this function
		// sizeofより+の方が結合力が強い

        return 0;
}
