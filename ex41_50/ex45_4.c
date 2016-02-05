#include <stdio.h>
#include <stdlib.h>

int main() {
	char fileName[128] , *text = "Kitty on your lap";
	FILE *save;

	printf("ファイル名を入力してください\n");
	printf("ファイルが存在する場合は内容を破壊します>");
	scanf("%s" , fileName);

	if ((save = fopen(fileName , "w")) == NULL) {
		printf("ファイルが開けませんでした");
		exit(1);
	}

	fprintf(save , text);

	fclose(save);
	return 0;
}
