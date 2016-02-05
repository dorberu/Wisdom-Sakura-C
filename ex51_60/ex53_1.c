#include <stdio.h>

int main() {
        unsigned char i = '5';
        printf("%d\n" , i);
        printf("%d" , i & 0x0f);
        return 0;
}