/*three numbers are equal or not*/
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c){
		printf("all numbers are equal");
	}
	else {
		printf("all numbers are different");
	}
}
