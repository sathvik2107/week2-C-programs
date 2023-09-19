/*electricity bill*/
/*for first 50 units 0.5/unit
for next 100 units 0.75/unit
for next 100 units 1.2/unit
for units above 250 1.5/unit*/
#include <stdio.h>
int main ()
{
	int unit;
	float amt,total_amt,surcharge;
	printf("enter the amount of units");
	scanf("%d",&unit);
	if (unit<=50)
	amt=unit*0.5;
	else if (unit<=150)
	amt=25+(unit-50)*0.75;
	else if (unit<=250)
	amt=100+(unit-150)*1.20;
	else
	amt=220+(unit-250)*1.50;
	surcharge=amt*0.2;
	total_amt=surcharge+amt;
	printf("%.2f is the electricity bill",total_amt);
		
}

