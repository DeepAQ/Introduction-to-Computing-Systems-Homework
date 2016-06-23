#include <stdio.h>

int main(){
	char c;
	printf("Input:\n");
	do {
		scanf("%c",&c);
		if (c>='a' && c<='z') c -= ('a'-'A');
		printf("%c",c);
	} while (c!='\n');
	return 0;
}
