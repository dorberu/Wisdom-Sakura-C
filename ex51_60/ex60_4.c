#include <stdio.h>
#include <time.h>

int main() {
	int i;
	double d;
	time_t timeValue[2];

	puts("演算中…");
	timeValue[0] = time( NULL );
	for (i = 0 ; i < 100000 ; i++) printf("%d\r" , i);
	timeValue[1] = time( NULL );

	printf("処理に %d 秒かかりました" , (int)difftime(timeValue[1] , timeValue[0]));
	// %dなので0秒になりました
		
	return 0;
}
