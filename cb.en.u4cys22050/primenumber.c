#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("ENTER THE NUMBER1");
	scanf("%d",&c);
	for(a=2;a<sqrt(c);a++){
	if (c%a==0){
	b=1;break;}
	}
	if(b==1){
		printf("THE NUMBER IS NOT A PRIME");
	}
	else {
	printf("The number is  prime");}
	return 0;
	}

