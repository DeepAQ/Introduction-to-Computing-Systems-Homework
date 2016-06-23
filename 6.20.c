#include <stdio.h>

int main(){
	int n,i;
	printf("Input: ");
	scanf("%d",&n);
	for(i=31;i>=0;i--){
		if(n&(1<<i))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
