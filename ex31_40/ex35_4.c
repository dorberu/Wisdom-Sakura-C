#include <stdio.h>

struct LOVE_HINA {
	char *name;
	int age;
}naru , sinobu;

void func(char *);

int main() {
	struct LOVE_HINA motoko;

	naru.name = "成瀬川なる";
	naru.age = 17;
	sinobu.name = "前原しのぶ";
	sinobu.age = 13;
	motoko.name = "青山素子";
	motoko.age = 15;
	
	func(motoko.name);

	return 0;
}

void func(char *name) {
	printf("%s",name);
}
