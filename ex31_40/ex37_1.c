#include <stdio.h>

struct Param {
	char *name;
	int age;
};

struct LOVE_HINA {
	struct Param hina;
}naru , sinobu;

struct LOVE_HINA2 {
	char *tabacco;
	struct Param hina;
}haruka;

void Param(struct Param * , char * , int);

int main() {
	printf("名前\t\t年齢\n");
	Param(&naru.hina , "成瀬川なる" , 17);
	Param(&sinobu.hina , "前原しのぶ" , 13);
	Param(&haruka.hina , "浦島はるか" , 27);
	haruka.tabacco = "マルボ○";
	printf("はるかさん、タバコは%sらしい…" , haruka.tabacco);

	return 0;
}

void Param(struct Param *obj , char *name , int age) {
	obj->name = name;
	obj->age = age;
	printf("%s\t%d\n" , obj->name , obj->age);
}
