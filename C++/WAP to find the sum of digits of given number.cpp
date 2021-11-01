// Write a C program to find the sum of digits of given number
#include <stdio.h>
int main() 
{
 int age;// Declaring Variable
 char gen;
 char marr;
 
 printf("Enter Gender in 'M' or 'F' : "); // Accepting Gender from user
 scanf("%c",&gen);
 printf("\n");
 
 printf("Enter Age : "); // Accepting Age from user
 scanf("%d",&age);
 
 printf("\n");
 
 printf ("Enter Marital Status in 'Y' or 'N' : ");
 scanf("%c",marr);
 
 printf("\n\n");
 
 if(marr=='Y') // Checking whether the use is a Married or not
 printf("INSURANCE RECEIVED");

 else if(marr=='N'&& gen=='M' && age > 30)
 printf("INSURANCE RECEIVED"); // Printing Insurace Status
 
 else if(marr=='N'&&gen=='F' && age > 25) 
 printf("INSURANCE RECEIVED");
 
 else
 printf ("INSURANCE NOT RECEIVED");
}
