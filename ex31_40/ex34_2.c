#include <stdio.h>

struct {
        char *name;
        int age;
}naru , sinobu;

int main() {
        printf("naru.name = %x\nnaru.age = %x\n" , &naru.name , &naru.age);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘char **’
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 3 has type ‘int *’

        printf("sinobu.name = %x\nsinobu.age = %x\n" , &sinobu.name , &sinobu.age);
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 2 has type ‘char **’
		// 警告: format ‘%x’ expects type ‘unsigned int’, but argument 3 has type ‘int *’

        return 0;
}
