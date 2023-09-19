/*c program on checking which triangle*/
#include <stdio.h>
int main()
{
	double a,b,c;
	printf("enter the sides of traingle");
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a==b && b==c){
		printf("it is an equialateral traingle");
	}
	else if (a==b && b!=c){
		printf("it is an isoceles traingle");
	}
	else{
		printf("it is an scalene traingle");
	}
}
