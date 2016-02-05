#include <stdio.h>

int main() {
        char str[128];
        printf("文字列を入力してください>");
        gets(str);
		// warning: the `gets' function is dangerous and should not be used.
        printf("入力した値 = %s\n" , str);
        return 0;
}
