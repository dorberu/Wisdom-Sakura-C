#include <stdio.h>
#define true 1
#define false 0

typedef struct {
        unsigned boolean: 1;
} BOOL;

int main() {
        BOOL i;
        i.boolean = true;
        printf("%d" , i.boolean);

        return 0;
}
