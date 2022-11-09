//8.
//8.
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the value of in this matrix");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=i;j<=2;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	return 0;
}
