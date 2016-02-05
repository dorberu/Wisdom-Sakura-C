#include <stdio.h>

struct test {
        int a;
};

struct {
        struct test base;
}obj , *po;

int main() {
        obj.base.a = 100;
        po = &obj;
        printf("%d" , po->base.a);
        return 0;
}
