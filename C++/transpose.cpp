//A program to calculate the transpose of a matrix.
#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("Enter number of rows:");
	scanf("%d",&i);
	printf("Enter number of columns:");
	scanf("%d",&j);
	int mat[i][j];
	for(a=1;a<i+1;a++)
	{
		for(b=1;b<j+1;b++)
		{
			printf("enter number in row %d :",a);
			scanf("%d",&mat[a][b]);
		}
	}
	printf("original matrix:\n");
	for(a=1;a<i+1;a++)
	{
		for(b=1;b<j+1;b++)
		printf("%d\t",mat[a][b]);
		printf("\n");
	}
	printf("transpose matrix:\n");
	for(a=1;a<i+1;a++)
	{
		for(b=1;b<j+1;b++)
		printf("%d\t",mat[b][a]);
		printf("\n");
	}
	return 0;
}
