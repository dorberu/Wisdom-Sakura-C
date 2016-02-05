#include <stdio.h>
#include <stdlib.h>

int main() {
        int i[] = { 100 , 200 , 300 };
        FILE *fp;

        if ((fp = fopen("text49_2.txt" , "wb")) == NULL) {
                fprintf(stderr , "ファイル操作でエラーが発生");
                exit(1);
        }

        fseek(fp , 1024 , SEEK_SET);

        fwrite(i , 4 , 3 , fp);
        fclose(fp);
        return 0;
}
