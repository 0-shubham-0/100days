#include<stdio.h>
int lng(char*);
int main() {
   char str[100];
   int length;
   printf("Enter any string : ");
   gets(str);
   length = lng(str);
   printf("\n The length of string is : %d",length);
}
 
int lng(char*p)
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
