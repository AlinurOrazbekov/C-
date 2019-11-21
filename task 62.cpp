#include <iostream>
using namespace std;
int main()
{
   int a, b, c, d,e,f;
   cin >> a;
   b = a % 10;
   d = a / 10 / 10 % 10;
   f = a/10/10/10/10%10;
   c=0;
   e=0;
   cout<<f<<e<<d<<c<<b;
}