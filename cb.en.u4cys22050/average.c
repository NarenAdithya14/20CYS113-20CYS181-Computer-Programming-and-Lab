#include<stdio.h>
int main(){
	double tm,ns,avg;
	printf("ENTER THE TOTAL MARKS");
	scanf("%d",&tm);
	printf("ENTER THE NO OF STUDENTS");
	scanf("%d",&ns);
	avg=tm/ns;
	printf("the average is %d",avg);
	return 0;
}
