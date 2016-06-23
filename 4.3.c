#include <stdio.h>

int main(){
	int a,b,c;
	printf("Input two integers: ");
	scanf("%d %d",&a,&b);
	if (a>b){
		c=a;
	} else {
		c=b;
	}
	printf("The larger number is %d.", c);
	return 0;
}
