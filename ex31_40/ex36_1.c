#include <stdio.h>

struct {
        int var;
}obj , *po;

int main() {
        po = &obj;
        obj.var = 100;

        printf("%d" , po->var);

        return 0;
}
