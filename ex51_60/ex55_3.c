#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *po;
	po = (char *)calloc(128 , sizeof(char));
	if (po == NULL) exit(1);

	strcpy(po , "Kitty on your lap");
	printf("%s" , po);
	free(po);
	return 0;
}
