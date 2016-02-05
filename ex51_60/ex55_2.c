#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *po;
	po = (char *)malloc(sizeof(char) * 128);
	if (po == NULL) exit(1);

	strcpy(po , "Kitty on your lap");
	printf("%s" , po);
	free(po);
	return 0;
}
