#include <stdio.h>
#include <stdlib.h>

int main() {
        char fileName[128];
        FILE *fp;

        printf("ファイル名を入力してください>");
        scanf("%s" , fileName);

        fp = fopen(fileName , "r");
        if (fp == NULL) {
                printf("ファイルが開けませんでした");
                exit (1);
        }
        printf("ファイルのオープンに成功しました");

        fclose(fp);
        return 0;
}
