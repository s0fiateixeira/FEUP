// PROG - 05/03/2020 - TPC2
// Ficha2 - Ex5
// up201806629

#include "pch.h"
#include <iostream>
#include <math.h>
//#include <complex>
using namespace std;

int main()
{
	float a, b, c;
	double number_sol, solution1, solution2;
	//complex <double> solution1, solution2;
	
	cout << "Solution of Ax^2 + Bx + C = 0\n";
	cout << "Insert the coefficients:\n" << "A  --> ";
	cin >> a;
	cout << "B --> ";
	cin >> b;
	cout << "C --> ";
	cin >> c;

	number_sol = (pow(b, 2) - 4 * a*c);

	if (number_sol > 0)
	{
		cout << "The equation has 2 different real roots: ";
	}
	else if (number_sol < 0)
	{
		cout << "The equation has 2 complex roots: ";
	}
	else
	{
		cout << "The equation has 2 equal real roots: ";
	}

	solution1 = (-b + sqrt(number_sol)) / (2 * a);
	solution2 = (-b - sqrt(number_sol)) / (2 * a);

	if (solution1 == solution2)
	{
		cout << solution1;
	}
	else
	{
		cout << solution1 << " and " << solution2;
	}


	return 0;
}
