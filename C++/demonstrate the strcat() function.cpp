#include <stdio.h>
#include <string.h>
int main ()
{
   char src[50], dest[50];

   strcpy(src,  "DBIT collge of engg");
   strcpy(dest, "hello welcome to");

   strcat(dest, src);
printf("Final destination string : |%s|", dest);
   return(0);
}

