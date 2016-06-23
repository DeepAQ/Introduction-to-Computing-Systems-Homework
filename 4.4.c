#include <stdio.h>

int main(){
        int year,month,days;
        printf("Input year: ");
        scanf("%d",&year);
        printf("Input month: ");
        scanf("%d",&month);
        
        if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        	days = 31;
		} else if (month == 2){
			if (year%4==0 && year%100!=0 || year%400==0){
				days = 29;
			} else {
				days = 28;
			}
		} else {
			days = 30;
		}
		printf("This month has %d days.",days);
}
