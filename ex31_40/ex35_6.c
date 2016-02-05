#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(struct LOVE_HINA);
struct LOVE_HINA LOVE_HINA(char * , int);

int main() {
	struct LOVE_HINA motoko;

	naru = LOVE_HINA("成瀬川なる" , 17);
	sinobu = LOVE_HINA("前原しのぶ" , 13);
	motoko = LOVE_HINA("青山素子" , 15);
	
	printf("名前\t\t年齢\n");
	func(naru);
	func(sinobu);
	func(motoko);

	return 0;
}

void func(struct LOVE_HINA hina) {
	printf("%s\t%d\n",hina.name , hina.age);
}

struct LOVE_HINA LOVE_HINA(char *name , int age) {
	struct LOVE_HINA hina;
	hina.name = name;
	hina.age = age;

	return hina;
}
