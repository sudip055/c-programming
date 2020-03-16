/*Create a structure named student that has name, roll, marks, and remarks as members.
 Assume appropriate types and size of member. 
 Write a program using structure to read and display the data entered by the user.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct employee
{
	char name[20], address[20];
	int age;
	float salary;
	
};
int main()
{
	struct employee *e;
	int n,i;
	int sum=0;
	float avg;
	printf("enter how many record?\t");
	scanf("%d",&n);
	e=(struct employee *)malloc(n *sizeof(struct employee));
	for(i=0;i<n;i++)
	{
		printf("enter the name :\t");
		scanf("%s",&(e+i)->name);
		printf("enter the address :\t");
		scanf("%s",&(e+i)->address);
		printf("enter the age :\t");
		scanf("%d",&(e+i)->age);
		printf("enter the salary :\t\n");
		scanf("%f",&(e+i)->salary);
		getch();
	}
	for(i=0;i<n;i++)
	sum=sum+(e+i)->salary;
	avg=sum/n;
	for(i=0;i<n;i++)
	{
	printf("%s\t\t%s\t\t%d\t\t%f\n", (e+i)->name, (e+i)->address, (e+i)->age,(e+i)->salary);
	} 

	printf("\n average salary is :%f\n",avg);
	
}
