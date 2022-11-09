//9.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int row,col,i,j,a[10][10],count=0;
	printf("enter row");
	scanf("%d",&row);
	printf("enter col");
	scanf("%d",&col);
	printf("enter element of matrix1");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
		printf("  ");
	}
	/* cheacking sparsh of matrix */
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j]==0)
			count++;
		}
	}
	if(count>((row*col)/2))
	printf("matrix is a sparse matrix");
	else
	printf("matrix is not sparse");
}
