#include <iostream>
using namespace std;
int main()
{
   int a, b, c, d, e, f, g, h;
   cin >> a>>h;
   b = a % 10;
   c= a / 10 % 10;
   d = a / 10 / 10 % 10;
   e=h%10;
   f = h/10%10;
   g =h/10/10%10;
   cout<<d<<g<<c<<f<<b<<e;
}