// PROG - 18/02/2020 - TP1
// Ficha1 - Ex4
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

// The solution to a system of linear equations in two variables(x e y)
		// a∙x + b∙y = c
		// d∙x + e∙y = f
// is given by
		// x = (c∙e ‐ b∙f) / (a∙e ‐ b∙d)
		// y = (a∙f ‐ c∙d) / (a∙e ‐ b∙d)
// Write a program that reads the values of a, b, c, d, e e f and determines the solution of the corresponding system of
// equations. Consider only the cases when there is a solution (it is not an impossible or inconsistent system).


int main()
{
	int a, b, c, d, e, f, x, y;

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

	x = (c*e - b*f) / (a*e - b*d);
	y = (a*f - c*d) / (a*e - b*d);

	cout << "The solution is:\nx = " << x << "\ny = " << y;

	return 0;
}
