#include<stdio.h>

int main(int argc , char *argv[]) {
        int count = 0;
        while (count < argc) {
                printf("第%d引数 = %s\n" , count + 1 , argv[count]);
                count++;
        }
        printf("Enter>");
        gets(argv);
        return 0;
}
