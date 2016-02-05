#include <stdio.h>

int main() {
        printf("%#x\n" , 255);
        printf("%#e\n" , 0);
        printf("%#g" , 0);
		// 警告: format ‘%#e’ expects type ‘double’, but argument 2 has type ‘int’
		// 警告: format ‘%#g’ expects type ‘double’, but argument 2 has type ‘int’
        return 0;
}
