/*Define a structure of student having data members name, address, marks in C language, and marks in 
information system.Take data for n students in an array dynamically and find the total marks obtained.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct student
{
	char name[50],address[50];
	float marks_c,marks_is;
};
int main()
{
	struct student *s;
	int n,i,total=0;
	printf("How much students detail to store : ");
	scanf("%d",&n);
	s=(struct student *)malloc(n *sizeof(struct student));
	for(i=0;i<n;i++)
	{
	    printf("\nEnter the name of student: ");
		scanf("%s",&(s+i)->name);
		printf("Enter the address: ");
		scanf("%s",&(s+i)->address);
		printf("Enter the marks obtain in C language: ");
		scanf("%f",&(s+i)->marks_c);
		printf("Enter the marks obtain in information system: ");
		scanf("%f",&(s+i)->marks_is);
		getch();
	}
	    printf("\nName\t\tAddress\t\tC language Marks\tInformation System Marks\t\Total Marks");
		for(i=0;i<n;i++)
		{
		printf("\n%s\t\t%s\t\t%f\t\t%f\t\t\t%f\n", (s+i)->name, (s+i)->address, (s+i)->marks_c,(s+i)->marks_is,(s+i)->marks_c+(s+i)->marks_is);
	    }
	    return 0;
}

