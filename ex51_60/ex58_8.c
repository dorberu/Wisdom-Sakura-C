#include <stdio.h>

int main() {
	char ch;
	int i , j;
	printf("演算します。式を入力してください>");
	scanf("%d %[+-*/] %d" , &i , &ch , &j);

	switch(ch) {
	case '+':
		printf("答えは %d です" , i + j);
		break;
	case '-':
		printf("答えは %d です" , i - j);
		break;
	case '*':
		printf("答えは %d です" , i * j);
		break;
	case '/':
		printf("答えは %d です" , i / j);
		break;
	default:
		printf("入力に誤りがあります");
	}
	return 0;
}
