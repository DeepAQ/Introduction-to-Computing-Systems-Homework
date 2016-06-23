#include <stdio.h>

double sqrt2(int x);

int main(){
	int x;
	scanf("%d",&x);
	printf("%lf",sqrt2(x));
	return 0;
}

double sqrt(int x){
	double y = 1.0;
	int i;
	for (i=1;i<=10;i++)
		y = (y+x/y)/2;
	return y;
}
