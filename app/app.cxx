/*
 * 2022 - Artyom Tagiev
 */
#include <iostream>

int main()
{
	using std::cout, std::endl, std::cin;
	int a, b, c, d, e, f;
	cout << "ax + by = c\ndx + ey = f\n";
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;
	cout << "d : ";
	cin >> d;
	cout << "e : ";
	cin >> e;
	cout << "f : ";
	cin >> f;
	cout << a << "x + " << b << "y = " << c << endl << d << "x + " << e << "y = " << f << endl;
	double x, y;
	y = (1.0*(a*f - d*c))/(1.0*(a*e - d*b));
	x = (1.0*(c - b*y))/a;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}
