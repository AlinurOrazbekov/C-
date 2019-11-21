#include <iostream>
using namespace std;
int main()
{
   int a, b, c, d, e;
   cin >> a;
   b = a % 10;
   c= a / 10 % 10;
   d = a / 10 / 10 % 10;
   e = a/10/10/10%10;
   if(e==b&&d==c){
   	cout<<"yes";
   }else{
   	cout<<"no";
   }
}