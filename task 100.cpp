#include <iostream>
using namespace std;
int main()
{
	for (int i = 1000; i <= 9999; i++) {
		int k = i % 10;
		int a = i / 10 % 10;
		int b = i / 10 / 10 % 10;
		int c = i / 10 / 10 / 10 % 10;
		if (k != 5 && a != 5 && b != 5 && k != 6 && a != 6 && b != 6 && c != 5 && c != 6) {
			cout << i << " ";
		}
	}
}