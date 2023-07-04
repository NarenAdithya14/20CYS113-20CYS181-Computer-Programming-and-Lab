#include<stdio.h>
int main(){
        int a,b,ans,dif,mul;
	double div;
	printf("SIMPLE CALCULATOR");
	printf("Enter the number 1");
	scanf("%d",&a);
	printf("Enter the number 2");
	scanf("%d",&b);
	ans=a+b;
	printf("The sum is ");
	printf("%d",ans);
	dif=a-b;
	printf("The difference is:");
        printf("%d",dif);
	mul=a*b;
	printf("THe  product is:");
	printf("%d",mul);
	div=a/b;
	printf("THE MODULUS IS ");
	printf("%f",div);
        return 0;
} 
