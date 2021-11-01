//  Write a C program to check the entered number is prime or not
#include <stdio.h>
int main() 
{
  int n, i, flag = 0;
  while (n<1)
  {
  	printf("Enter a positive integer: ");
  	scanf("%d", &n);
  }
  for (i = 2; i <= n / 2; i++) 
  {
    if (n % i == 0)  // condition for non-prime
	{
      flag = 1;
      break;
    }
  }

  if (n == 1) 
  {
    printf("1 is neither prime nor composite."); //when input is 1
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.", n); //when input is prime
    else
      printf("%d is not a prime number.", n); //when input is not prime
  }

  return 0;
}
