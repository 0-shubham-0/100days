//  Write a C program find a factorial of given number
#include <stdio.h>
int main()
{
    int i=1, n,sum=1;
    printf("Enter any number: "); //take input n
    scanf("%d", &n);
     while(i <= n)  //while loop
    {
    	sum=sum*i;
        i++;                  //loop increment
    }
	printf("%d\n", sum);  //output
    return 0;
}
