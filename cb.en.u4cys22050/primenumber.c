#include<stdio.h>
int main()
{
	int n,p;
	printf("enter the number to check if it is prime or not");
        scanf("%d",&n);
	p=0;
	for (int i=2;i<n;i=i+1)
	{
		if(n%i==0)
		{
			p=1;
                        break;
		}
	}
	if (p==0)
	{ 
		printf("its a prime");
	}
	else
	{
		printf("it is not a prime");
	}
	return 0;
}

