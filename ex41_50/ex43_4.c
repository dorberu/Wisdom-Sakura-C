#include <stdio.h>
#include <stdlib.h>

int main() {
	char fileName[124];
	int getf;
	FILE *fp;

	printf("ファイル名を入力してください>");
	scanf("%s" , fileName);

	fp = fopen(fileName , "r");
	if (fp == NULL) {
		printf("ファイルが開けませんでした");
		exit (1);
	}

	while(1) {
		if (ferror(fp)) {
			printf("エラーが発生しました");
			break;
		}
		getf = fgetc(fp);		
		if (!feof(fp)) printf("%c" , getf);
		else break;
	}

	fclose(fp);
	return 0;
}
