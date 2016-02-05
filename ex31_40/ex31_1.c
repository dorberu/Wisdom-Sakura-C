#include<stdio.h>

void call_by_value(int );
void call_by_reference(int *);

int main() {
	int var = 10;

	call_by_value(var);
	printf("値渡し後 = %d\n" , var);

	call_by_reference(&var);
	printf("参照渡し後 = %d" , var);

	return 0;
}

void call_by_value(int var) {
	var = 100;
}

void call_by_reference(int *var) {
	*var = 100;
}
