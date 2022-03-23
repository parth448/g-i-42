#include<stdio.h>
#include<math.h>
#define PI 3.14256

int main()
{
float x,deg,num,den, term,sum;
int i;
printf("Enter the degree\n");
scanf("%f",&deg);
x=deg*(PI/180.0);
i=1;
num=x;
den=1;
term=x;
sum=x;

	do
	{
	i=i+2;
	num=-num*x*x;
	den=den*i*(i-1);
	term=num/den;
	sum=sum+term;
	} while(fabs(term)>=0.0001);
printf("user compiled sin(%.2f)=%.2f\n",deg,sum);
printf("Inbuild sin(%.2f)=%.2f\n",deg,sin(x));
return 0;
}
