#include <stdio.h>
#define YUKI "Kitty on your lap\n"

int main() {
        #ifdef YUKI
                printf(YUKI);
        #endif

        #undef YUKI

        #ifdef YUKI
                printf(YUKI);
        #else
                printf("ひざの上の同居人");
        #endif
        return 0;
}
