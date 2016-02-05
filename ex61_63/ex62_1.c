#include <stdio.h>
#include <stdarg.h>

void dynamicArgument(int , ...);

int main() {
	dynamicArgument(4 , 10 , 20 , 30 , 40);
	return 0;
}

void dynamicArgument(int arg_num , ...) {
	va_list args;
	int value , count;

	if (arg_num < 1) return;

	va_start(args , arg_num);

	for (count = 0 ; count < arg_num ; count++) {
		value = va_arg(args , int);
		printf("第%d引数 = %d\n" , count + 2 , value);
	}

	va_end(args);
	return;
}
