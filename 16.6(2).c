#include <stdio.h>

char* StrCpy(char* firstStr, char* secondStr);

int main(){
	char a[255],b[255];
	scanf("%s",b);
	StrCpy(a,b);
	printf("%s",a);
	return 0;
}

char* StrCpy(char* firstStr, char* secondStr){
	int j;
	for (j=0; secondStr[j]!=0; j++){
		firstStr[j] = secondStr[j];
	}
	firstStr[j+1] = 0;
	return firstStr;
}
