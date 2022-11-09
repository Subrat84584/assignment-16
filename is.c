//10.
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("enter the value of this matrix 0's and 1's form");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   scanf("%d",&a[i][j]);
	    }
    }
    int max_count=0,index=-1;
    for(i=0;i<=2;i++)
    {
    	int c=0;
    	for(j=0;j<=2;j++)
    	{
    		if(a[i][j]==1)
    		c++;
		}
		if(c>max_count)
		{
			max_count=c;
			index=i;
		}
	}
	printf("index of row with maximum 1s is %d",index);
	return 0;
}
