#include <stdio.h>

int func(int var1 , int var2);

int main() {
        int var;
        var = func(13 , 17);

        printf("戻ってきた値 = %d" , var);

        return 0;
}

int func(int var1 , int  var2 ) {
        return var1 + var2;
}
