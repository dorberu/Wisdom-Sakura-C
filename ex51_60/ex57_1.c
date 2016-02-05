#include <stdio.h>
#define STR "Kitty on your lap"

int main() {
        int i;

        printf("%c : %C - 文字\n" , 'A' , 'A');
        printf("%d : %u - 符号付と符号なし10進数\n" , 0xff , 0xff);
        printf("%i : %o - 符号付8進数（%%dと冗長）と符号なし8進数\n" , 0xff , 0xff);
		// 警告: フォーマットへの引数が少なすぎます
		// と言われるので%dを%%dに修正
        printf("%x : %X - 符号なし16進数、小文字と大文字\n" , 0xff , 0xff);

        printf("%e : %E - [-]d.dddd e [sign]ddd 形式符号付きの値\n" , 1.24 , 1.24);
        printf("%f - [-]dddd.dddd 形式の符号付きの値\n" , 1.24);
        printf("%g : %G - f,eうち精度を表現できる短い方の書式\n" , 1.24 , 1.24);

        printf("%s : %S - ヌル文字までの文字列\n", STR , STR);
		// 警告: format ‘%S’ expects type ‘wchar_t *’, but argument 3 has type ‘char *’

        printf("Kitty%n <- ここまでの出力数を保存\n" , &i);
        printf("%d - ストリームまたはバッファに書き込まれた文字数\n" , i);
        printf("%p - ポインタを表示\n" , i);
        return 0;
}
