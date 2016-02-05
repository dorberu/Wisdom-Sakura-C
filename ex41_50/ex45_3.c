#include <stdio.h>
#include <stdlib.h>

int main() {
        char fileName[128] , text[1024];
        FILE *load;

		// ファイルを読み込んで標準出力する
        printf("ファイル名を入力してください>");
        scanf("%s" , fileName);

        if ((load = fopen(fileName , "r")) == NULL) {
                printf("ファイルが開けませんでした");
                exit(1);
        }

        while (fscanf(load , "%s" , text) != EOF) printf(text);

        fclose(load);
        return 0;
}
