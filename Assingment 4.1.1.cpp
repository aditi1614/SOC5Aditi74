#include<iostream>
using namespace std;

class Calculator
{
public:
int sub(int a,int b)
{
return a-b;
}
int sub(int a,int b, int c)
{
return a-b-c;
}
};


int main()
{
Calculator c;
cout<<"The sub of first is-"<<c.sub(5,4);
cout<<"The sub of sec is"<<c.sub(5,4,3);
return 0;
}

