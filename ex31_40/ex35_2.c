#include <stdio.h>

struct copy {
        char str[128];
        int var1;
        double var2;
}st_var1;

int main() {
        struct copy st_var2;

        printf("文字列の入力>");
        scanf("%s" , st_var1.str);
        st_var1.var1 = 100;
        st_var1.var2 = 10.1435;

        st_var2 = st_var1;

        printf("str = %s\n" , st_var2.str);
        printf("var1 = %d\n" , st_var2.var1);
        printf("var2 = %g" , st_var2.var2);

        return 0;
}
