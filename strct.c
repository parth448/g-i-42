#include<stdio.h>
int main()
{
struct student
{
int stu_id;
char name[20];
float m1;
float m2;
float m3;
float m4;
float m5;
float avg;
};
struct student s[20];
int i,n;
printf("Enter the numbers of records :");
scanf("%d",&n);
printf("Enter %d students details...\n",n);
for(i=0;i<n;i++)
{
	printf("\n\nEnter the student ID :");
	scanf("%d",&s[i].stu_id);
	printf("\n\n Enter the student name :");
	scanf("%s", s[i].name); // student name
	printf("Enter the marks of m1 :");
	scanf("%f",&s[i].m1); //m1 marks
	printf("Enter the marks of m2 :");//m2 marks
	scanf("%f",&s[i].m2);
	printf("Enter the marks of m3 :"); //m3 marks
	scanf("%f",&s[i].m3);
	printf("Enter the marks of m4 :"); //m4 marks
	scanf("%f",&s[i].m4);
	printf("Enter the marks of m5 :"); //m5 marks
	scanf("%f",&s[i].m5);
}
// compute the average of each student
for(i=0;i<n;i++)
{
s[i].avg=(s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
}
// display student ID, name and average of all students
// who have scored above average marks
printf("\n\nStudent scoring above the average marks.....\n");
printf("\n\nID\tName\tAverage\n\n");
for(i=0;i<n;i++)
{
	if(s[i].avg>=35.0)
	printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
}
//display student ID, name average of all atudent
//who scored less the the averge marks
printf("\n\nStudents scoring the below average marks....\n");
printf("\n\nID\tName\tAverage\n\n");
for(i=0;i<n;i++)
{
	if(s[i].avg<35.0)
	printf("%d\t%s\t%f\n",s[i].stu_id,s[i].name,s[i].avg);
}
return 0;
}

