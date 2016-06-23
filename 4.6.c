#include <stdio.h>

int main(){
	int a,b,c,n,i;
	printf("Input n: ");
	scanf("%d",&n);
	a = 1; b = 1;
	for (i=1;i<n;i++){
		c = a+b;
		a = b;
		b = c;
	}
	printf("f(%d) = %d",n,b);
}
