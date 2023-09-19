/*salary of an employee*/
/*salary=basic+da+hra*/
#include <stdio.h>
int main ()
{
	float basic,da,hra,salary;
	printf("enter the basic salary of employee");
	scanf("%f",&basic);
	if (basic<=25000){
		da=(basic*10)/100;
		hra=(basic*15)/100;
	}
	
	else if(basic<=40000){
		da=(basic*12)/100;
		hra=(basic*18)/100;
	}
	else{
		da=(basic*15)/100;
	    hra=(basic*20)/100;
    }
	salary=basic+da+hra;
 	printf("%.2f is the salary of the empolyee",salary);
	
}
