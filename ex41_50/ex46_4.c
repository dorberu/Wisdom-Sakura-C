#include <stdio.h>

void outSize(size_t size);

int main() {
        size_t i = 100;

        outSize(i);
        outSize(100000);

        return 0;
}

void outSize(size_t size) {
        printf("%d\n" , size);
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘size_t’
}
