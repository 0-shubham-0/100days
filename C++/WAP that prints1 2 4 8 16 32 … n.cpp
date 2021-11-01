//  Write a C program that prints       1 2 4 8 16 32 … n
#include <stdio.h>
int main()
{
	int i=1,n,sum=1;
	printf("Enter a positive integer: ");
  	scanf("%d", &n);          //taking input 
  	for (i = 1; i <= n; i+=i)  //for loop
  	{
  		printf("%d ",i);         //output
	  }
    return 0;
}
