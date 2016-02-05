#include <stdio.h>

int func(int , int);

int main() {
        int (*po)(int , int) , i;
        po = func;

        i = (*po)(10 , 3);
        printf("%d" , i);
        return 0;
}

int func(int i , int j) {
        return i << j;
}
