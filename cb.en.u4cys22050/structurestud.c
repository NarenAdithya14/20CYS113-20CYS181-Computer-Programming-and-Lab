#include<stdio.h>
#include<string.h>
int main(){
		int n;
	printf("Enter the no of students");
	scanf("%d",&n);
	struct stude
	{	char name[20];
	int roll;
	char fathername[20];
	char mothername[20];
	int phoneno;
																									                     
}s[76];
for(int i=0;i<n;i++){
	
	printf("Enter the name%d",i+1);
	scanf("%s",&s[i].name);
	printf("Enter the roll no%d",i+1);
	scanf("%d",&s[i].roll);
	printf("ENTER THE FATHER NAME%d",i+1);
	scanf("%s",&s[i].fathername);
          printf("Enter the name%d",i+1);
	  scanf("%s",&s[i].mothername);
		  printf("Enter the phone no%d",i+1);
			          scanf("%d",&s[i].phoneno);}
				  s[50];
				  int tamilmarks;
				  int chemmarks;
				  int phymarks;
				  int socialmarks;
				  int englishmarks;
				  double avg;
				  int total;
				  double sgpa;
				  double cgpa;

				  for(int j=0;j<n;j++){
					  
					  printf("Enter the phy marks of student%d",j+1);
						  scanf("%d",&phymarks);
					  printf("Enter the CHEM marks of student%d",j+1);
					  scanf("%d",&chemmarks);
					  printf("Enter the tamil marks of student%d",j+1);
	                                  scanf("%d",&tamilmarks);
					  printf("Enter the social marks of student%d",j+1);													                                                                                       scanf("%d",&socialmarks);
					  printf("Enter the social marks of student%d",j+1);                                                                                                                                                                                          scanf("%d",&englishmarks);
					  total=phymarks+englishmarks+tamilmarks+chemmarks+socialmarks;
					  printf("The total of student%d",total);
					  avg=total/5;
					  printf("The avg of the student is %lf",avg);
					  sgpa=avg/10;
					  printf("The sgpa of the student%lf",sgpa);
					  cgpa=sgpa/1;
					  printf("th cgpa is %lf",cgpa);
				  }
return 0;


				  }
				         

