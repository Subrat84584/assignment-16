//2.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("enter the value in 1st matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the value of 2nd value");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
	return 0;
}
