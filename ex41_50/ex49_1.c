#include <stdio.h>
#include <stdlib.h>

int main() {
	char fileName[128];
	int fileIndex , text;
	FILE *fp;

	printf("読み込むファイル名を指定してください>");
	scanf("%s" , fileName);
	printf("ファイルを読み出す開始位置をバイト単位で指定してください>");
	scanf("%d" , &fileIndex);

	if ((fp = fopen(fileName , "r")) == NULL) {
		fprintf(stderr , "ファイル操作でエラーが発生");
		exit(1);
	}

	fseek(fp , fileIndex , SEEK_SET);
	printf("///ファイル位置 %d から読み出します///\n" , ftell(fp));
	// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘long int’

	while(1) {
		text = fgetc(fp);
		if (!feof(fp)) printf("%c" , text);
		else break;
	}
	fclose(fp);
	return 0;
}
