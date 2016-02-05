#include <stdio.h>
#include <time.h>

int main() {
        time_t timeValue;
        struct tm *timeObject;

        time(&timeValue);
        timeObject = localtime(&timeValue);

        printf("%d年 %d月 %d日 || %d : %d : %d" ,
                timeObject->tm_year + 1900 , timeObject->tm_mon + 1 ,
                timeObject->tm_mday , timeObject->tm_hour ,
                timeObject->tm_min , timeObject->tm_sec);

        return 0;
}
