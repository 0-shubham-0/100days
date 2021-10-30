#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class gcd
{
    private:
	int a,b;
    public:
	void calc()
    {
        cout<<"Enter 2 nos";
        cin>>a>>b;
   
        while(a!=b)
        {
            if (a>b)
            {
                a=a-b;
            }
            else{
                b=b-a;
            }

        }
         cout<<"\n The gcd is "<<a;
    }

};
int main()
{
    gcd z;
    z.calc();
    getch();
}
