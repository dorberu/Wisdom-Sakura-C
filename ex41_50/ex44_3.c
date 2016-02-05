#include <stdio.h>

int main() {
        char str[] = "Kitty on your lap\n";
        char er[] = "エラーです : 猫耳を愛しましょう";
        int count ;

        for (count = 0 ; str[count] != 0 ; count++) {
                fputc(str[count] , stdout);
        }
        for (count = 0 ; er[count] != 0 ; count++){
                fputc(er[count] , stderr);
        }
        return 0;
}
