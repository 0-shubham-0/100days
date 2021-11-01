// Write a C program to print the natural numbers up to n
#include <stdio.h>
int main()
{
    int i=1, n;
    printf("Enter any number: "); //take input n
    scanf("%d", &n);
     while(i <= n)  //while loop
    {  
        printf("%d\n  ", i);  //output
        i++;                  //loop increment
    }
    
}
