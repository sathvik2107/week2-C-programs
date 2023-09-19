#include <stdio.h>
int main()
{
	int phy,chem,bio,math,comp;
	float per;
	printf("enter the marks of the 5 subjects");
	scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
	per=(phy+chem+bio+math+comp)/5;
	printf("percentage=%.2f",per);
	if (per=90){
		printf("grade a");
	}
	else if (per>=80){
		printf("grade b");
	}
	
	else if (per>=70){
		printf("grade c");
	}
	else if (per>=60){
		printf("grade d");
	}
	else if (per>=40){
		printf("grade e");
	}
	else{
		printf("grade f");
	}
}
