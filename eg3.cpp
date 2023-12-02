#include <iostream>
using namespace std;
int add(int a, int b, int c)
{
return a+b+c;
}
int add(int a, int b)
{
return a+b;
}
int main()
{
cout<<add(3,5,8)<<endl;
cout<<add(10,8);
return 0;
}
