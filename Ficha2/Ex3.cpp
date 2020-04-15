// PROG - 05/03/2020 - TPC2
// Ficha2 - Ex3
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num_a, num_b, sum;
	cout << "Write two integer numbers:";
	cin >> num_a;
	cin >> num_b;
	sum = num_a + num_b;

	if (sum > INT_MAX)
		cout << "sum overflow";
	else if (sum < INT_MIN)
		cout << "sum underflow";
	else
		cout << "The sum is " << sum;
}
