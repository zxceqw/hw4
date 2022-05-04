#include <iostream>
#include <cmath>
using namespace std;



int main()
{
	double a = 4.8;
	double b = -7.9;
	double n, m;

	if (a >= b)
		n = cbrt(a - b);

	else
		n = pow(a, 2) + ((a - b) / (sin(a * b)));

	if (n < b)
		m = ((n + a) / -b) + sqrt(sin(a) * sin(a) - cos(n));

	else if (n == b)
		m = pow(b, 2) + tan(n * a);
	
	else
		m = pow(b, 3) + n * pow(a, 2);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "n = " << n << endl;
	cout << "m = " << m << endl;
	
	return 0;
}