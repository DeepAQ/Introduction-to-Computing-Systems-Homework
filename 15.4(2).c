#include <stdio.h>

double solve(int a,int b);

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%lf",solve(a,b));
	return 0;
}

double solve(int a,int b){
	double s = -b*1.0/a;
	return s;
}
