#include<stdio.h>
int main()
{
int a[20][20],b[20][20], mul[20][20],i,j,k,p,q,n,m;
printf("Enter the size of martrixA array:\n" );
scanf("%d  %d",&m,&n);
printf("Enter the size of matrixB array:\n");
scanf("%d  %d",&p,&q);
if(n!=p)
{
printf("Matrix multiplication is not possible\n");
return 1;
}
printf("Enter the element in matrix A:");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
	}
}
//display matrix A
printf("MAtrix A -\n");
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	printf("%d\t",a[i][j]);
	printf("\n");
	}
}
printf("Enter the element in matrix B:");
for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	{
	scanf("%d",&a[i][j]);
	}
}


// display matrix B 
printf("Matrix B -");
for(i=0;i<p;i++)
{
	for(j=0;j<q;j++)
	{
	printf("%d\t",a[i][j]);
	printf("\n");
	}
}
// multiplication of Matrix A and Matrix B
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
	mul[i][j]=0;
	for(k=0;k<n;k++)
	{
		mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
	}
	}
}
// display product of matrix
printf("The product of matrix is - \n");
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
	printf("%d\t",mul[i][j]);
	}
printf("\n");
}
return 0;
}
