#include <stdio.h>

int main()
{
        char str[10];

        printf("文字列を入力してください(9文字以内)\n");
        gets(str);
		// gets関数はセキュリティ上危険

        printf("■入力された文字列■\n%s" , str);

        return 0;
}
