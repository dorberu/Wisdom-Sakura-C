#include <stdio.h>
#include <stdlib.h>

int main() {
        char i[] = { 65 , 66 , 67 , 68 , 69 , 70 };

        fwrite(&i , sizeof(char) , 6 , stdout);
        printf("\n");
        fwrite(&i , sizeof(char)+1 , 3 ,stdout);

        return 0;
}
