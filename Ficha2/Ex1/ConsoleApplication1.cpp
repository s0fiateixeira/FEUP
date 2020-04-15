// PROG - 03/03/2020 - TP2
// Ficha2 - Ex1
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f, x, y;
	float slope1, slope2;

	cout << "Solving the system of linear equations in 2 variables: (a*x + b*y = c   and   d*x + e*y = f)\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	cout << "d = ";
	cin >> d;
	cout << "e = ";
	cin >> e;
	cout << "f = ";
	cin >> f;

	slope1 = -(a / b);
	slope2 = -(d / e);


	if (slope1 == slope2)
	{
		cout << "Impossible System!!";
	}
	/*else if ()
	{
		cout << "Inconsistent System!!";
	}*/
	else
	{
		x = (c*e - b * f) / (a*e - b * d);
		y = (a*f - c * d) / (a*e - b * d);

		cout << "The solution is:\nx = " << x << "\ny = " << y;
	}

	return 0;
}

