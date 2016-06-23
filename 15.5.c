#include <stdio.h>

int prime(int x);

int main(){
	int i;
	for (i=2;i<100;i++)
		if (prime(i))
			printf("%d ",i);
	return 0;
}

int prime(int x){
	int i;
	for (i=2;i<=x/2;i++){
		if (x%i == 0) return 0;
	}
	return 1;
}
