#include<stdio.h>
int main()
{
	char str[1000];
	int c=0,count=0;
	printf("Input a string \n");
	gets (str);
	while(str[c]!='\0')
	{
		if(str[c]=='A'||str[c]=='E'||str[c]=='I'||str[c]=='O'||str[c]=='U'||str[c]=='a'||str[c]=='e'||str[c]=='i'||str[c]=='o'||str[c]=='u')
		{
			count++;
		}
		c++;
	}
	printf("Number of vowels: %d",count);
}
