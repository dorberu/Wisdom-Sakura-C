#include <stdio.h>

int main() {
        char yn;
        printf("猫耳は好きですか?y/n>");
        scanf("%[yn]" , &yn);

        printf("入力された値 = %c" , yn);
        return 0;
}
