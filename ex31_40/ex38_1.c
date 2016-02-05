#include <stdio.h>

struct {
        unsigned bool: 1;
}Boolean;

int main() {
        Boolean.bool = 2;
		// 警告: 大きな整数が暗黙に符合無し型に切り詰められました
        printf("2 = %d\n" , Boolean.bool);

        Boolean.bool = 3;
		// 警告: 大きな整数が暗黙に符合無し型に切り詰められました
        printf("3 = %d" , Boolean.bool);

        return 0;
}
