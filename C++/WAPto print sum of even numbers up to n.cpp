//  Write a C program to print sum of even numbers up to n
#include <stdio.h>
int main()
{
    int i=0, n,sum=0;
    printf("Enter any number: "); //take input n
    scanf("%d", &n);
     while(i <= n)  //while loop
    {
    	sum=sum+i;
        i+=2;                  //loop increment
    }
	printf("%d\n", sum);  //output
    return 0;
}
