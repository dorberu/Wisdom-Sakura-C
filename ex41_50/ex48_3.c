#include <stdio.h>
#include <stdlib.h>

int main() {
	int i[] = { 100 , 200 , 300 } , re[3];
	FILE *fp;

	if ((fp = fopen("text48_3.txt" , "w")) == NULL) {
		printf("ファイル操作中にエラーが発生");
		exit(1);
	}

	fwrite(i , sizeof(int) , 3 , fp);
	fclose(fp);

	if ((fp = fopen("text48_3.txt" , "r")) == NULL) {
		printf("ファイル操作中にエラーが発生");
		exit(1);
	}

	fread(re , sizeof(int) , 3 , fp);
	fclose(fp);	

	printf("%d" , re[0] + re[1] + re[2]);
	return 0;
}
