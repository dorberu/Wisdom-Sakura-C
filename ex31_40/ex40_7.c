#include <stdio.h>
#define YUKI "Kitty on your lap\n"

int main() {
        printf("LINE = %d\n" , __LINE__);
        printf("FILE = %s\n" , __FILE__);

        #line 100 "love_hina"

        printf("LINE = %d\n" , __LINE__);
        printf("FILE = %s\n" , __FILE__);

        return 0;
}
