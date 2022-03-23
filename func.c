#include<stdio.h>
#include<math.h>
int main()
{
int i, n;
float a[10],mean,sd,sum,var;
float *p;
// p is pointer float variable
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter the elements:");
p=a;
// pointer p points the first element of a
for(i=0;i<n;i++)
{
scanf("%f",p);
p++;
// pointer p points the next element of a
}
p=a;
//Initialize p to  the first element of an array
printf("\n input Elements are:\n");
for(i=0;i<n;i++)
{
printf("%f\t",*p);
p++;
//pointer p is made to point to the next element
}
p=a;
//Initialize p to the first element of the array
sum=sd=mean=var=0;
// Find the sum of the array elements
for(i=0;i<n;i++)
{
sum=sum+(*p);
p++;
}
// Find the mean
mean= sum/n;
// Find the variance
p=a;
for(i=0;i<n;i++)
{
var=var+pow((*p-mean),2);
p++;
}
var=var/n;
//Find the standard Deviation
sd=sqrt(var);
// Print sum, meanand standard deviation
printf("\n\n mean=%f\nsum=%f\nsd=%f\nvar=%f",mean,sum,sd,var);
return 0;
}
