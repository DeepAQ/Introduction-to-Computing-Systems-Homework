#include <stdio.h>

int main(){
	int a,b;
	printf("Input two integers: ");
	scanf("%d %d",&a,&b);
	printf("The larger number is %d.", (a>b)?a:b );
	return 0;
}
