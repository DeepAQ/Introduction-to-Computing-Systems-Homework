#include <stdio.h>

int main(){
	char s[255];
	int i,n;
	scanf("%[^\n]",s);
	//scanf("%s",s);
	scanf("%d",&n);
	for (i=0; s[i]!=0; i++){
		if (s[i] > (126-n)){
			s[i] -= (94-n);
		} else {
			s[i] += n;
		}
	}
	printf("%s",s);
	return 0;
}
