#include<stdio.h>
int main()
{
	double t,i,rate;
	printf("enter the number of hours");
	scanf("%lf",&t);
	printf("enter the amount of trips");
	scanf("%lf",&i);
	rate=i/t;
	printf("%f",rate);
	return 0;
}


