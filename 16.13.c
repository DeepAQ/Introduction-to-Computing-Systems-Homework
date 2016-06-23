#include <stdio.h>
#define size 5
 
int main(){
	int i,j,k,a,n;
	char s[100][255];
    
    printf("Input n (n<=100): ");
	scanf("%d",&n);
	printf("Input %d strings:\n",n);
    for(i=0;i<n;i++){
    	scanf("%s",s[i]);
	}
	
	for(i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			k = 0;
			a = 1;
			while (s[i][k]!=0 && s[j][k]!=0){
				if (s[i][k]!=s[j][k]){
					a = 0;
				}
				k++;
			}
			if (a==1 && s[i][k]==s[j][k]){
				s[j][0] = 0;
			}
		}
	}
	
	printf("\n");
	for(i=0;i<n;i++){ 
	    if(s[i][0]!=0){
		    printf("%s",s[i]);
		    printf("\n");
		}
	}
}
