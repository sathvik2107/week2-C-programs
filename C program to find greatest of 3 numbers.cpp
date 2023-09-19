/*c program on finding the greatest of three numbers*/
#include <stdio.h>
int main ()
{
	double a,b,c;
	printf("enter three numbers");
	scanf("%lf %lf %lf",&a,&b,&c);
	if (a>=b && a>=c)
	printf("%.2lf is the greatest number",a);
	else if (b>=c && b>=a)
	printf("%.2lf is the greatest number",b);
	else 
	printf("%.2lf is the greatest number",c);
	
}
