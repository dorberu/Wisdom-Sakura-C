#include <stdio.h>
#include <stdlib.h>

int main() {
	char fileName[128] , saveName[128];
	int text;
	FILE *load , *save;

	printf("ファイルをコピーします\nファイル名を入力してください>");
	scanf("%s" , fileName);

	if ((load = fopen(fileName , "r")) == NULL) {
		printf("ファイルを開けませんでした");
		exit(1);
	}

	printf("コピーファイル名を入力してください\n存在する場合は内容を破壊します>");
	scanf("%s" , saveName);
	
	if ((save = fopen(saveName , "w")) == NULL) {
		printf("書き込みに失敗しました");
		exit(1);
	}

	while(1) {
		text = fgetc(load);
		if(!feof(load)) fputc(text , save);
		else break;
	}

	fclose(load);
	fclose(save);
	return 0;
}
