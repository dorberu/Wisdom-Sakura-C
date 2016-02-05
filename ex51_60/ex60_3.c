#include <stdio.h>
#include <time.h>

// 無限ループのためコンソール上には何も表示されず
int main() {
	time_t timeValue , timeTmp;
	struct tm *timeObject;

	while (1) {
		if (time(&timeValue) != timeTmp) {
			timeObject = localtime(&timeValue);

			if (timeObject == NULL) {
				puts("システム時刻が正常に得られません");
				break;
			}

			printf("%2.2d : %2.2d : %2.2d\r" , timeObject->tm_hour ,
				timeObject->tm_min , timeObject->tm_sec);
		}
		timeTmp = timeValue;
	}
		
	return 0;
}
