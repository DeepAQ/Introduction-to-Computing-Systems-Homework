#include <stdio.h>

char* StrCat(char *firstStr, char *secondStr);

int main(){
	char a[255],b[255];
	scanf("%s",a);
	scanf("%s",b);
	printf("%s",StrCat(a,b));
	return 0;
}

char* StrCat(char* firstStr, char* secondStr){
	int i,j;
	for (i=0; firstStr[i]!=0; i++);
	for (j=0; secondStr[j]!=0; j++){
		firstStr[i+j] = secondStr[j];
	}
	firstStr[i+j+1] = 0;
	return firstStr;
}
