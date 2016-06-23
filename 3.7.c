#include <stdio.h>

int main(){
	int sec;
	printf("Input: ");
	scanf("%d",&sec);
	
	int h = sec/3600;
	int m = (sec-h*3600)/60;
	int s = sec-h*3600-m*60;
	
	printf("%d h %d m %d s.\n",h,m,s);
	return 0;
}
