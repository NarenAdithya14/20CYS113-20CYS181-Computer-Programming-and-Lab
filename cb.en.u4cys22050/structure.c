#include<stdio.h>
struct comp{
	double real,imag;
};
int main(){
	struct comp num1,num2,sum;
	scanf("%lf%lf/n",&num1.real,&num1.imag);
	scanf("%lf%lf/n",&num2.real,&num2.imag);
	sum.real=num1.real+num2.real;
	sum.imag=num1.imag+num2.imag;
	printf("sum %lf%lfi",sum.real,sum.imag);
	return 0;
	}
