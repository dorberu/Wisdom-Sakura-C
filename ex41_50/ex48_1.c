#include <stdio.h>
#include <stdlib.h>

int main() {
        int i;
        FILE *fp;
        printf("値を入力してください");
        scanf("%d" , &i);

        if ((fp = fopen("text48_1.txt" , "w")) == NULL) {
                fprintf(stderr , "ファイル操作中にエラーが発生");
                exit(1);
        }

        fprintf(fp , "%d" , i);
        fclose(fp);

        return 0;
}
