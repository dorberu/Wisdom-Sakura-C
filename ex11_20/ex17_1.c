#include <stdio.h>

int main()
{
        char str[4];
        int count;

        str[0] = 'R';
        str[1] = 'e';
        str[2] = 'n';
        str[3] = 'a';

        for(count = 0 ; count <= 3 ; count++) printf("%c" , str[count]);
		// 配列の最後に0が無くても動いてる

        return 0;
}
