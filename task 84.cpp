#include <iostream>
using namespace std;
int main()
{
	double i;
	cin >> i;
	while (i < 101)
	{
		cout << i << "-" << i*70 << "-" << i *70/20.0<< endl;
		break;
	}
}