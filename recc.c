#include<stdio.h>
int btod(int);
// prototype of btod() function
int main()
{
int binary,decimal;
printf("Enter the binary number:");
scanf("%d",&binary);
decimal=btod(binary);
printf("Decimal equivalent= %d\n",decimal);
return 0;
}
// Function definition of btod() function
int btod(int bin)
{
if(bin==0)
{
return 0;
}
else
{
return(bin%10+btod(bin/10)*2);
}
}

