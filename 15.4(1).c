#include <stdio.h>

double pow2(double x,int y);

int main(){
	double x;
	int y;
	scanf("%lf%d",&x,&y);
	printf("%lf",pow2(x,y));
	return 0;
}

double pow2(double x,int y){
	double s = x;
	int i;
	for (i=2;i<=y;i++)
		s *= x;
	return s;
}
