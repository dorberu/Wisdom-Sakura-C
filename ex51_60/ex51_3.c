#include <stdio.h>

enum Kitty { MIMI , YUKI = 5 , RENA } cats;

int main() {
        cats = RENA;

        switch(cats) {
        case MIMI:
                printf("ミミが好き");
                break;
        case YUKI:
                printf("ユキが好き");
                break;
        case RENA:
                printf("レナが好き");
        }

        return 0;
}
