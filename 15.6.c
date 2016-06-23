#include <stdio.h>

char getfirst(int x);

int main(){
	int x,a,b,i,j;
	scanf("%d",&x);
	a = x / 10;
	b = x % 10;
	if (a<=1 && b<=1) return 1;
	if (a<=1){
		for (j=getfirst(b); j<getfirst(b+1); j++)
			printf("%c ",j);
		return 0;
	}
	if (b<=1){
		for (j=getfirst(a); j<getfirst(a+1); j++)
			printf("%c ",j);
		return 0;
	}
	for (i=getfirst(a); i<getfirst(a+1); i++)
		for (j=getfirst(b); j<getfirst(b+1); j++)
			printf("%c%c ",i,j);
	return 0;
}

char getfirst(int x){
	switch(x){
		case 0: return 0;
		case 1: return 0;
		case 2: return 'a';
		case 3: return 'd';
		case 4: return 'g';
		case 5: return 'j';
		case 6: return 'm';
		case 7: return 'p';
		case 8: return 't';
		case 9: return 'w';
		case 10: return 'z'+1;
		default: return '\x00';
	}
}
