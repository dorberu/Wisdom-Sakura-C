#include <stdio.h>

union UNION {
        char ch;
        int n;
        double m;
};

int main() {
        union UNION obj , *po;

        printf("%x : %x : %x\n" , &obj.ch , &obj.n , &obj.m);
        po = &obj;
        po->n = 65;
        printf("%c : %d : %g\n" , po->ch , po->n , po->m);

        return 0;
}
