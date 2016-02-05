#include <stdio.h>
#define STR "Kitty on your lap"

int main() {
        int i , j;
        printf("Kitty on your lap%n\n" , &i);
        printf("%nKitty on your lap\n" , &j);

        printf("i = %d , j = %d" , i , j);
        return 0;
}
