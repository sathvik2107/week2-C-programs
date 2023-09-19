/*year and month and finding the no of days*/
#include <stdio.h>
int main ()
{
	int y,m;
	printf("enter the year");
	scanf("%d",&y);
	printf("enter the month");
	scanf("%d",&m);
	if (m==2 && y%400==0 && y%100!=0 && y%4==0){
		printf("no of days=29");
	}
	else if (m==2){
		printf("no of days is 28");
	}
	else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		printf("no of days is 31");
	}
	else if (m==4 || m==6 || m==9 || m==11){
		printf("no of days is 30");
	}
	else{
		printf("invalid input");
	}
}
