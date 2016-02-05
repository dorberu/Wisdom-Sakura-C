#include <stdio.h>

struct {
        char *name;
        int age;
}naru , sinobu;

int main() {
        naru.name = "成瀬川なる";
        naru.age = 17;
        sinobu.name = "前原しのぶ";
        sinobu.age = 13;

        printf("名前\t\t年齢\n");
        printf("%s\t%d\n" , naru.name , naru.age);
        printf("%s\t%d\n" , sinobu.name , sinobu.age);

        return 0;
}
