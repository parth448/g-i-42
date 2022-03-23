#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,d,r1,r2,real,img;
printf("ENTER THE COEEFICIENT OF EQUATION:\n");
scanf("%f\n%f\n%f\n",&a,&b,&c);
d=(b*b-4*a*c);
if(a==0)
{
printf("It is not a quadratic equation\n");
}
else if(d==0)
{
r1=-b/2*a;	
r2=-b/2*a;
printf("Roots are real and equal: %f and %f",r1,r2);
}
else if(d>0)
{
r1=(-b+sqrt(d))/2*a;
r2=(-b-sqrt(d))/2*a;
printf("Roots are real and distinct: %f and %f",r1,r2);
}
else
{
real=-b/2*a;	
img=(sqrt(-d))/2*a;
printf("The equation have imaginary roots:");
printf("r1=%f+i%f",real,img);
printf("r2=%f-i%f",real,img);
}
return 0;
}
	
		
	



		

