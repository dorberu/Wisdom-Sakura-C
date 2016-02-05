#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
};

int main() {
	int ary_index;
	struct LOVE_HINA structNA[3];

	structNA[0].name = "成瀬川なる";
	structNA[0].age = 17;
	structNA[1].name = "前原しのぶ";
	structNA[1].age = 13;
	structNA[2].name = "青山素子";
	structNA[2].age = 15;

	printf("なる = 0 , しのぶ = 1 , 素子 = 2>");
	scanf("%d", &ary_index);
	if ((ary_index >= 0) && (ary_index <= 2)) {
		printf("名前\t\t年齢\n");
		printf("%s\t%d" , structNA[ary_index].name , structNA[ary_index].age);
	}
	else printf("エラー : その番号のデータはありません");

	return 0;
}
