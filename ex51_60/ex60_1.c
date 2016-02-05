#include <stdio.h>
#include <time.h>

int main() {
        time_t cl;
        time(&cl);
        printf("%d : %d" , cl , time(NULL));
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘time_t’
		// 警告: format ‘%d’ expects type ‘int’, but argument 2 has type ‘time_t’
        return 0;
}
