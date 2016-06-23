#include <stdio.h>

int main(){
	int n,i;
	double pi,a;
	printf("Input n: ");
	scanf("%d",&n);
	pi = 0;
	for (i=1;i<=n;i++){
		pi += ( (i%2)?1:-1 ) * ( 4.0/(2*i-1) );
	}
	printf("PI = %f\n",pi);
}
