#include <stdio.h>

void func2() {
        printf("your lap\n");
}

void func1() {
        printf("kitty on ");
        func2();
}

int main() {
        func1();
        printf("ご主人様関数\n");
        func1();

        return 0;
}
