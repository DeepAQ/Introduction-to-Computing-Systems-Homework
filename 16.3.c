#include <stdio.h>

int main(){
	int a[100];
	int i,j,k,n;
	printf("Input n (n<=100): ");
	scanf("%d",&n);
	printf("Input %d numbers: ",n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++){
		for (j=0;j<i;j++){
			if (a[j] == a[i]){
				for (k=j;k<n-2;k++){
					a[k] = a[k+1];
				}
				a[k+1] = 0;
				n--;
				j--;
				i--;
			}
		}
	}
	for (j=0;j<n;j++){
		printf("%d ",a[j]);
	}
	printf("\n");
	return 0;
}
