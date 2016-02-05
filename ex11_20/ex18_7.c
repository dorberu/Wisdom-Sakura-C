#include <stdio.h>

int main()
{
        int ary[][2] = {
                10 , 100 ,
                1000 , 1000
        } ;
		// 警告: 初期化子のまわりのブレースを欠いています
		// 警告: (near initialization for ‘ary[0]’)

        printf("%d\n%d\n" , ary[0][0] , ary[0][1]);
        printf("%d\n%d", ary[1][0] , ary[1][1]);

        return 0;
}
