#include <stdio.h>

int main() {
        char *str = "YUKI \0 RENA \0 MIMI";
		// \0で文字列終了の印
        printf("%s\n%s\n%s" , str , str + 7 , str + 14);
        return 0;
}
