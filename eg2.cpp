#include <iostream>
using namespace std;
int main()
{
int a = 100;
int &b = a;
cout<<"The value of a is: "<<a<<endl;
cout<<"The value of a using alias b is: "<<b;
return 0;
}
