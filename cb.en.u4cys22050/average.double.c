#include<stdio.h>
int main(){
	double tm,ns,avg;
	printf("Enter the total marks");
	scanf("%lf",&tm);
	printf("Enter the no of students");
	scanf("%lf",&ns);
	avg=tm/ns;
	printf("%lf",avg);
	return 0;
}
