// Write a C program to print even numbers up to n
#include <stdio.h>
int main()
{
    int i=0, n;
    printf("Enter any number: "); //take input n
    scanf("%d", &n);
     while(i <= n)  //while loop
    {  
        printf("%d\n", i);  //output
        i+= 2;                  //loop increment
    }
    return 0;
}
