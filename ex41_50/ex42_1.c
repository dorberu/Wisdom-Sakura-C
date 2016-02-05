#include <stdio.h>
#define PRINT(str) printf(#str "\n")
#define STRING(str) #str

int main() {
        PRINT(Kitty on your lap);
        printf("%sバイトは1キロバイト" , STRING(1024));

        return 0;
}
