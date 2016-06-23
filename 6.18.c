#include <stdio.h>

int main(){
	char c;
	printf("Input:\n");
	do {
		scanf("%c",&c);
		if (c!=' ') printf("%c",c);
	} while (c!='\n');
	return 0;
}
