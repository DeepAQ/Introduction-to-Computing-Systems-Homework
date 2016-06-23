#include <stdio.h>

int conv(int x,int i);

int main(){
	int x;
	scanf("%d",&x);
	conv(x,0);
	return 0;
}

int conv(int x,int i){
	if (i==32){
		return 0;
	}
	conv(x/2,i+1);
	printf("%d",x%2);
}
