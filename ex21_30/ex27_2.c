#include <stdio.h>

void func();	/*前方宣言になってしまう*/

int main() {
        func();
        return 0;
}

void func() {
        printf("kitty on your lap");
}
