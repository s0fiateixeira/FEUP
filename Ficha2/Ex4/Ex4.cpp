// PROG - 05/03/2020 - TPC2
// Ficha2 - Ex4
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float weight, cost;

    cout << "How much does the merchandise weight (in grams)? ";
	cin >> weight;

	if (weight <= 500)
	{
		cost = 5;
	}
	else if ((weight >= 501) && (weight <= 1000))
	{
		cost = 5;
		weight = weight / 100;
		while (weight > 0)
		{
			cost = cost + 1.5;
			weight = weight - 1;
		}
	}
	else if (weight > 1000)
	{
		cost = 12.5;
		weight = weight / 250;
		while (weight > 0)
		{
			cost = cost + 5;
			weight = weight - 1;
		}
	}


	cout << "Then the cost of its transportation is " << cost << " euros!";
	return 0;
}
