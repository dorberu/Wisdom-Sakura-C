#include <stdio.h>

int main() {
        int ary[] = { 10 , 20, 30 , 40 , 50 , 0 };
        int count = 0;

        while (ary[count]) {		/*forを使ったほうが無難かも...*/
                printf("ary[%d] = %d\n" , count , *(ary + count));
                count++;
        }
        return 0;
}
