#include<stdio.h>
#include<stdlib.h>

int main() {
	char ch[] = "Kitty on your lap";
	wchar_t wch[] = L"Kitty on your lap";

	printf("char 型文字列 = %d\n" , sizeof ch);
	printf("wchar_t 型文字列 = %d\n" , sizeof wch);
	// 72が出力されました（wchar_tは4バイト計算）
	return 0;
}
