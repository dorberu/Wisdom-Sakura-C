#include <stdio.h>

int main() {
        unsigned char i = 0x7f;
        printf("%d\n" , i ^ 0xff);
        printf("%d" , i ^ i);
        return 0;
}
