#include<stdio.h>
int main()
{
	double lit,rate,T;
	printf("enter the no. of litres in the bag");
	scanf("%lf",&lit);
	printf("The litre of medicine in bag %f",lit);
	printf("enter the timr");
	scanf("%lf",&T);
	rate=lit/T;
	printf("rate of infusion %f",rate);
	return 0 ;
}
