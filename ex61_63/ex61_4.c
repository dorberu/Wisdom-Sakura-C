#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int count , one = 0 , zero = 0;
	srand((unsigned)time( NULL ));
	for (count = 0 ; count < 100000 ; count++) {
		if (rand() % 2) one++;
		else zero++;
	}
	printf("0 = %d : 1 = %d" , zero , one);
	return 0;
}
