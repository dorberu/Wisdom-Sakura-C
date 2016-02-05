#include <stdio.h>

enum Kitty { MIMI , YUKI , RENA };

int main() {
        enum Kitty cats;

        cats = MIMI;
        printf("MIMI = %d\n" ,cats);
        cats = YUKI;
        printf("YUKI = %d\n" , cats);
        cats = RENA;
        printf("RENA = %d\n" ,  cats);

        return 0;
}
