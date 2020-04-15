// PROG - 10/03/2020 - TP3
// Ficha3 - Ex4
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;


double round(double x, unsigned n)
{
	/*to round the value of x to 2 decimal places),
	you can use the following operation:
	floor(x * 100 + 0.5) / 100;*/



}



int main()
{
	double number;
	int decimal_places;

    cout << "_______Round Decimal Numbers_______";
	cout << "Choose the number that you want to round: ";
	cin >> number;
	cout << "How many decimal places do you want? ";
	cin >> decimal_places;

	cout << "The final value is: " << round(number, decimal_places);

	return 0;
}
