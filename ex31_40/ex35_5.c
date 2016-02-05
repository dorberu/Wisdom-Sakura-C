#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "成瀬川なる";
	naru.age = 17;
	sinobu.name = "前原しのぶ";
	sinobu.age = 13;
	motoko.name = "青山素子";
	motoko.age = 15;
	
	printf("名前\t\t年齢\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}
