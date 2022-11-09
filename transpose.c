//3.transpose of matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the value of this matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("your matrix is");
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	printf("your transpose matrix is: ");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		     printf("%d ",a[j][i]);	
		}
	}
	return 0;
}

