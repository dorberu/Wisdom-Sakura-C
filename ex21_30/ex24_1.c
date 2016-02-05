#include <stdio.h>

int main() {
        int get_n;
        char *ary[] = { "デ・ジ・キャラット" , "プ・チ・キャラット" , "ラビアンローズ" };
        printf("どんな娘がお好み?\n");
        printf("目からビーム = 1\n突っ込みトラ娘 = 2\nサイコロ少女 = 3\n");
        printf("1～3の半角英数>");

        scanf("%d",&get_n);
        if (( get_n <= 3 ) && ( get_n >= 1))

                printf("あなたは%sさんが好きなのですね☆" , ary[get_n - 1]);
        else printf("不正な値です");

        return 0;
}
