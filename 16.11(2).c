#include <stdio.h>

int flip(int a[255][255], int b[255][255], int m, int n);

int main(){
	int m,n,i,j;
	int a[255][255];
	int b[255][255];
	printf("Input m,n: ");
	scanf("%d %d",&m,&n);
	for (i=0; i<m; i++)
		for (j=0; j<n; j++){
			scanf("%d",&a[i][j]);
		}
	flip(a,b,m,n);
	for (i=0; i<n; i++){
		for (j=0; j<m; j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int flip(int a[255][255], int b[255][255], int m, int n){
	int i,j;
	for (i=0; i<m; i++)
		for (j=0; j<n; j++)
			b[j][i] = a[i][j];
	return 0;
}
