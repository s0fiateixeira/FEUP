// PROG - 18/02/2020 - TP1
// Ficha1 - Ex3
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;
#define _USE_MATH_DEFINES
#include <math.h>

// The mass of a sphere is given by the expression M = 4/3*(p*pi*r^3) where M, p and r are, respectively, the mass of the
// sphere, the specific mass of the material from which it is made, and its radius. Write a program that, given the values
// of p and r, determines the value of M. The user must be informed about the units used to represent all the values: Kg/m^3,
// m and Kg  for p, r and M, respectively. Use a constant to represent the value of p.
// Note : math constants are not defined in Standard C / C++; in some compilers, M_PI is defined as a symbol, to use it you must
// first define _USE_MATH_DEFINES (using the compiler directive #define _USE_MATH_DEFINES) and then include cmath or math.h.

int main()
{
	double p, m, pi;
	int r;

    cout << "______CALCULATE THE MASS OF A SPHERE______\n" << "\n";
	cout << "Which is the mass of the material from which the sphere is made? (in kg/m^3) - ";
	cin >> p;
	cout << "Which is the radius of the sphere? (in m) - 5";
	cin >> r;
	pi = M_PI;
	m = (4/3) * p * pi * (r^3);
	cout << "The mass of the sphere is " << m;

}
