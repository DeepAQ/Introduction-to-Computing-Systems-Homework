#include <stdio.h>

int main(){
	int i,s;
	s=1;
	i=2;
	while (i<=9){
		s*=i;
		i++;
	}
	printf("9! = %d",s);
}
