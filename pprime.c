#include<stdio.h>

void pprime(int min,int max)
{
int i,j,flag;
for(i=min;i<=max;i++)
{
if(i==1||i==0)
continue;

flag=1;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
{
flag=0;
break;
}
}
if(flag==1)
printf("%d\t",i);
}
}


int main()
{
int lower, upper;
printf("Enter the limits : ");
scanf("%d%d",&lower,&upper);
printf("The prime number between %d and %d are: ",lower,upper);
pprime(lower,upper);
return 0;
}
