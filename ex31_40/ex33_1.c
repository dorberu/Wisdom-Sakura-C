#include <stdio.h>

int max(int , int );

int main() {
	int r_var , var1 , var2;

	printf("最初の値を入力してください>");
	scanf("%d" , &var1);
	printf("比較する値を入力してください>");
	scanf("%d" , &var2);

	r_var = max(var1,var2);
	printf("%dのほうが大きいです",r_var);

	return 0;
}

int max(var1 , var2)
int var1,var2;
{
	if (var1 > var2) return var1;
	if (var2 > var1) return var2;
	else return var1;
}
