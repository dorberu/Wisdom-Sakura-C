#include <stdio.h>

union UNION {
        char ch;
        int n;
        double m;
};

int main() {
        union UNION obj;
        obj.m = 0;

        obj.ch = '@';
        printf("%c : %d : %g\n" , obj.ch , obj.n , obj.m);
        obj.n++;
        printf("%c : %d : %g\n" , obj.ch , obj.n , obj.m);
        obj.m = 3.26083e-322;
        printf("%c : %d : %g\n" , obj.ch , obj.n , obj.m);

        return 0;
}
