#include <stdio.h>

int main(){
	int status = 0;
	int n = 0;
	char c;
	do {
		scanf("%c",&c);
		if (c=='i' && (status==0 || status==2))
			status = 1;
		else if (c=='n' && status==1)
			status = 2;
		else if (c=='t' && status==2)
			status = 3;
		else
			status = 0;
		if (status==3){
			n++;
			status = 0;
		}
	} while (c!='\n');
	printf("%d\n",n);
}
