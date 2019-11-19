#include <iostream>
using namespace std;
int main() {
	cout << "Silence is golden" << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	cout << "Monday" << " " << "November" << " " << "Alinur" << endl;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int a = 0;
	cin >> a;
	for (int i = 0; i < 5; i++) {
cout << "0";
		for (int j = 0; j <=i; j++) {
			cout << "0";
		}
cout << endl;
	}
	return 0;
}



#include <iostream>
#include <cmath>
using namespace std;
int main() {
	cout << 1.0 / 2 + 1.0 / 4 << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c,s;
	cin >> a >> b >> c;
	s = a + b - c;
	cout << s<< endl;
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	double s;
	cin >> a >> b;
	s = (a + (4*b))*(a - (3*b)) + a * a;
	cout << s << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x;
	double s;
	cin >> x;
	s = abs(x)+ pow(x,5);
	cout << s << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float x;
	double s;
	cin >> x;
	s = pow((x+1),2) + 3 * (x + 1);
	cout << s << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x = -2.34;
	double s;
	s = (abs(x - 5) - sin(x)) / 3.0 + sqrt(x * x + 2014) * cos(2 * x) - 3;
	 cout << s << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double e = 2.718281828459045;
	int x = 3.6;
	double s;
	s = pow(e, x - 2) + abs(sin(x)) - pow(x, 4) * cos(1.0 / x);
	cout << s << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a, b;
	int x;
	double s;
	cin >> a >> b >> x;
	s = pow(x * x + b, 1.0 / 5) - (b * b * pow(sin(x + a), 3)) / x * 1.0;
	cout << s << endl;
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	float s, s1;
	cin >> a >> b;
	s = (a + b) / 2;
	s1 = (a * b) / 2;
	cout << s << " " << s1 << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	double s1, s2;
	s1 = a * a;
	s2 = a * a * a;
	cout << s1 << " " << s2 << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b, c;
	double s, s1, s2;
	cin >> a >> b >> c;
	s = a * a;
	s1 = pow(b, 0.3);
	s2 = pow(c, 3.0);
		cout << s << " " << s1 << " " << s2 << endl;
	return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	cin >> a;
	double s1, s2;
	s1 = a * 4;
	s2 = a * a;
	cout << s1 << " "<<s2 << endl;
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a;
	int b;
	cin >> a >> b;
	int x, y;
	cin >> x >> y;
	double s, s1;
	s = a * x;
	s1 = b * y;
	cout << s << " " << s1 << endl;
	return 0;
}

#include<iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	float S, P, c;
	S = (a * b) / 2;
	c = sqrt(a * a + b * b);
	P = a + b + c;
	cout << S << " " << P << " " << c << endl;
	return 0;
}
 
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	double F;
	F = (t *9/5)+32;
	cout << F << endl;
	return 0;
}
#include<iostream>
using namespace std;
int main() {
	double t, v;
	cin >> t >> v;
	cout << (v * 1000) / (t * 60.0);
}



#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	b /= 100;
	for (int i = 0; i < a; i++) {
		c += 3;
		c += c*b;
	}cout << c;
}


#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	cout << a * 7 + b * 30 + c * 12 * 30;
}



#include<iostream>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	int t = a;
	a = b;
	b = t;
	cout<<a<<" "<<b;
}


#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	a = a + b;
	b = c - a + b;
	c = a  + c;
	cout << a << " " << b << " " << c;
}



#include<iostream>
using namespace std;
int main() {
	double a, b, s;
	cin >> a >> b;
	s = a + a * b * 5 / 100.0;
	cout << s;
}


#include<iostream>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	swap(a, b);
	cout << a << " " << b;
}

#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b = a * a;
	a = b * b;
	cout << a<<endl;
	b = a * b;
	cout << b<<endl;
}


#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int b = a * a;
	int c = b * a;
	int d = c * c;
	int e = d * d;
	int f = e * c;
	cout << f;
}


#include<iostream>
using namespace std;
int main() {
	int a = 647, b = 170;
	int c = a / 30;
	int d = b / 30;
	cout << c * d;
}


#include<iostream>
using namespace std;
int main() {
	int a = 237;
	int b = a / 100;
	int c = 237 % 100;
	int d = c * 10 + b;
	cout << d;
}



#include<iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (x * 1000 >= y) {
cout << sqrt(x - sqrt(y));
	}
	else {
		cout << "Error";
	}
}


#include<iostream>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a > 3) {
		cout << a * 10;
	}
	else {
		cout << a / 10;
	}
}


#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a <= 7) {
		cout << "Yes";
	}
	else if (a < 10) {
		cout << "Error";
	}
	else {
		cout << "No";
	}
}


#include <iostream> 
using namespace std;
int main() {
	int a;
	cin >> a;
	switch (a) {
	case 1:
		cout << "January" << endl;
		break;
	case 2:
		cout << "February" << endl;
		break;
	case 3:
		cout << "March" << endl;
		break;
	case 4:
		cout << "April" << endl;
		break;
	case 5:
		cout << "May" << endl;
		break;
	case 6:
		cout << "June" << endl;
		break;
	case 7:
		cout << "July" << endl;
		break;
	case 8:
		cout << "August" << endl;
		break;
	case 9:
		cout << "September" << endl;
		break;
	case 10:
		cout << "October" << endl;
		break;
	case 11:
		cout << "November" << endl;
		break;
	case 12:
		cout << "December" << endl;
		break;
	default:
		cout << "Does not exist" << endl;
	}
}



#include<iostream>
using namespace std;
int main() {
	int a,b; 
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else if(a < b) {
		cout << b;
	}
	else {
		cout << "equal";
	}
}


#include<iostream>
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;
	if (a - b >= 100) {
		cout << "YES";
	}
	else
	{
		cout << "no";
	}
}


#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << "YES";
	}
	else {
		swap(a, b);
		cout << a << " " << b;
	}
}


#include<iostream>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a > -10 && a < 10) {
		cout << a * 5;
	}
	else {
		cout << a / 10;
	}
}


#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a > 100 || a < -100) {
		a = 0;
		cout << a;
	}
	else {
		a = 1;
		cout << a;
	}
}


#include<iostream>
using namespace std;
int main() {
	double a;
	cin >> a;
	if (a >= 2 && a <= 5) {
		cout << a * 10;
	}
	else if (a >= 7 && a <= 40) {
		cout << a / 100.0;
	}
	else if (a<=0&&a>=3000) {
		cout << a * 3;
	}
	else {
		a = 0;
		cout << a;
	}
}


#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	if (a == 1 || a == 2 || a == 12) {
		cout << "Winter";
	}
	else if (a >= 3 && a <= 5) {
		cout << "Spring";
	}
	else if (a >= 6 && a <= 8) {
		cout << "Summer";
	}
	else if (a > 13) {
		cout << "Does not exist";
	}
	else {
		cout << "Autumn";
	}
}


#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a == 10 || b == 10) {
		if (a % 2 == 0) {
			cout << a + b;
		}
	}
	else {
		cout << a*b;
	}
}


#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > 10 && b > 10 && c > 10) {
		if (a % 3 == 0 && b % 3 == 0) {
			cout << "Yes";
		}
	}
	else {
		cout << "No";
	}
}


#include <iostream>
using namespace std;
int main()
{
	int x, y, z;
	cin >> x >> y >> z;
	if (x % 5 == 0 && y % 5 == 0) {
		cout << x + y << endl;
	}
	else if (x % 5 == 0 && z % 5 == 0) {
		cout << x + z << endl;
	}
	else if (y % 5 == 0 && z % 5 == 0) {
		cout << y + z << endl;
	}
	else if (x % 5 == 0 && y % 5 == 0 && z % 5 == 0) {
		cout << x + y + z << endl;
	}
	else {
		cout << "Error" << endl;
	}
}


#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << a;
	}else if (a<b && b>c) {
		cout << b;
	}else if (c > a&& c > b) {
		cout << c;
	}else if (a == b) {
		cout << a << " " << b;
	}else if (a == c) {
		cout << a << " " << c;
	}else if (b == c) {
		cout << b <<" "<< c;
	}else if (a == b && b == c) {
		cout << a << " " << b << " " << c;
	}
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int x, y, z, max;
	cin >> x >> y >> z;
	max = x + y;
	if (max < y + z)
		max = y + z;
	if (max < z + x)
		max = z + x;
	cout << max << endl;
	return 0;
}



#include<iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a % 2 == 1 && a >= b&& a >= c&& a >= d) {
		cout << a;
	}else if (b % 2 == 1 && b >= a&& b >= c&& b >= d) {
		cout << b;
	}else if (c % 2 == 1 && c >= b&& c >= a&& c >= d) {
		cout << c;
	}else if (d % 2 == 1 && d >= b&& d >= c&& d >= a) {
		cout << d;
	}
	else {
		cout << "not found";
	}
}


#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b || a == c) {
		cout << "yes";
	}else if (b == c || b == c) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}








	