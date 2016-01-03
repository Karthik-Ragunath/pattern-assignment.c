# pattern-assignment.c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows,i,j,number;
	int value=1;
	printf("enter the number of rows :\n");
	scanf("%d",&rows);
	int *arr[rows];
	for(i=0;i<rows;i++)
	{
		arr[i]=(int*)malloc(rows*sizeof(int));
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=rows;j++)
		{
			arr[i][j]=0;
		}
	}
	if(rows<3)
	{
		for(i=0;i<rows;i++)
		{
			for(j=0;j<=i;j++)
			{
				arr[i][j]=value+(2*j);
			}
			value++;
		}
		for(i=0;i<rows;i++)
		{
			for(j=0;j<=i;j++)
			{
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<=i;j++)
		{
			arr[i][j]=value+(2*j);
		}
		value++;
	}
	for(i=2;i<rows;i++)
	{
		number=(i-1)/2;
		value=arr[i-1][number]+1;
		for(j=0;j<=i;j++)
		{
			arr[i][j]=value+(2*j);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	// your code goes here
	return 0;
}
