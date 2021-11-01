//  Write a C program to print natural numbers up to n in reverse order
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number: "); //take input n
    scanf("%d", &n);
     while(n >= 0)  //while loop
    {
    	printf("%d\n",n );     //output
        n--;                  //loop increment
    }
    return 0;
}
