//5.
//4.
#include<stdio.h>
int main()
{
	int a[2][2],i,j,sum=0;
	printf("enter the value in this matrix");
    for(i=0;i<=1;i++)
	{
	    for(j=0;j<=1;j++)
		{
		    scanf("%d",&a[i][j]);	
		}	
	}
	for(i=0;i<=1;i++)
	{
	   for(j=0;j<=1;j++)
	   {
	       if(i!=j)
		   sum=sum+a[i][j];	
	   }	
	}	
	printf("sum of the right diagonal mtrix is:%d",sum);
	return 0;
}
