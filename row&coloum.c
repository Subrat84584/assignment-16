//6.
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the value of this matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("sum of row is: ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
         {
         	sum=sum+a[i][j];
		 }
		 printf("%d ",sum);
		 sum=0;
	}
	printf("\nsum of column is: ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
         {
         	sum=sum+a[j][i];
		 }
		 printf("%d ",sum);
		 sum=0;
	}
	
	return 0;
}
