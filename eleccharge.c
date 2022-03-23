#include<stdio.h>

int main()
{
char name[20];
float unit,charge,total;
printf("Enter the consumer's name:");
gets(name);
printf("Enter the no of units:");
scanf("%f",&unit);
if(unit>=1 && unit<=200)
{
charge=(unit*0.8);
}
else if(unit>200 && unit<=300)
{
charge=(200*0.8)+(unit-300)*0.9;
}
else if(unit>300)
{
charge=(200*0.8)+(100*0.9)+(unit-300)*1;
}
total=charge+100;
if (total>400)
{
total=total+(total*0.15);
}
printf("Electricity Bill\n");
printf("User name: %s\n",name);
printf("No.of units=%.2f\n",unit);
printf("Charge=%.2f\n",total);
return 0;
}
