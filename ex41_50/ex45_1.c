#include <stdio.h>
#include <stdlib.h>

int main() {
        char FileName[124];
        FILE *save;

        printf("ファイル名を入力してください>");
        scanf("%s" , FileName);

        if ((save = fopen(FileName , "w")) == NULL) {
                printf("ファイルが開けませんでした");
                exit(1);
        }
        fputs("Kitty on your lap" , save);
        fclose(save);

        return 0;
}
