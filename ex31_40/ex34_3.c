#include <stdio.h>

struct LOVE_HINA {
        char *name;
        int age;
}naru , sinobu;

int main() {
        struct LOVE_HINA motoko;
        naru.name = "成瀬川なる";
        naru.age = 17;
        sinobu.name = "前原しのぶ";
        sinobu.age = 13;
        motoko.name = "青山素子";
        motoko.age = 15;

        printf("名前\t\t年齢\n");
        printf("%s\t%d\n" , naru.name , naru.age);
        printf("%s\t%d\n" , sinobu.name , sinobu.age);
        printf("%s\t%d\n" , motoko.name , motoko.age);

        return 0;
}
