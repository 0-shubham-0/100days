#include <stdio.h>
#include <conio.h>
struct student 
{
  int id;
  char *name;
  float percentage;
};

 int main()
{
  struct student st;
  st.id=1;
  st.name = "Shubham";
  st.percentage = 90.5;
  printf(" Id is: %d \n", sizeof (char));
  printf(" Name is: %s \n", st.name);
  printf(" Percentage is: %.1f \n", st.percentage);
}
