#include<iostream>
using namespace std;
class Book
{
public:
string name;
int id;
Book(string n,int i)
{
name=n;
id=i;

cout<<"Parameterized Constructer"<<endl;
}

 Book(Book &b)
{
name=b.name;
 id=b.id;
 cout<<"Copy Constructer"<<endl;
}
void display()
{
 cout<<"The book name is"<<endl;
 cout<<"The id is="<<endl;
}
};
int main()
{
Book b1("Atomic Habits" ,1234);
Book b2(b1);
b1.display();
b2.display();
return 0;
}

