// PROG - 03/03/2020 - TP2
// Ficha2 - Ex2
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

int Ficha2_Ex_2_a()
{
	float numb1, numb2, numb3, max, min;

	cout << "Write three numbers:\n";
	cin >> numb1 >> numb2 >> numb3;

	if ((numb1 >= numb2) && (numb1 >= numb3))
	{
		max = numb1;
		if (numb2 <= numb3)
		{
			min = numb2;
		}
		else
		{
			min = numb3;
		}
	}
	if ((numb2 >= numb1) && (numb2 >= numb3))
	{
		max = numb2;
		if ((numb1 <= numb3))
		{
			min = numb1;
		}
		else
		{
			min = numb3;
		}
	}
	else
	{
		max = numb3;
		if ((numb1 <= numb2))
		{
			min = numb1;
		}
		else
		{
			min = numb2;
		}
	}

	cout << "The largest number is " << max << " and the smallest is " << min;

	return 0;
}



int Ficha2_Ex_2_b()
{
	float numb1, numb2, numb3, max, min, middle;

	cout << "Write three numbers:\n";
	cin >> numb1 >> numb2 >> numb3;

	if ((numb1 >= numb2) && (numb1 >= numb3))
	{
		max = numb1;
		if (numb2 <= numb3)
		{
			min = numb2;
			middle = numb3;
		}
		else
		{
			min = numb3;
			middle = numb2;
		}
	}
	if ((numb2 >= numb1) && (numb2 >= numb3))
	{
		max = numb2;
		if ((numb1 <= numb3))
		{
			min = numb1;
			middle = numb3;
		}
		else
		{
			min = numb3;
			middle = numb1;
		}
	}
	else
	{
		max = numb3;
		if ((numb1 <= numb2))
		{
			min = numb1;
			middle = numb2;
		}
		else
		{
			min = numb2;
			middle = numb1;
		}
	}

	cout << "Numbers in descending order " << max << "-" << middle << "-" << min;

	return 0;
}

int Ficha2_Ex_2_c()
{
	float numb1, numb2, numb3, max, min;

	cout << "Write three positive numbers:\n";
	cin >> numb1 >> numb2 >> numb3;

	if ((numb1 < 0) || (numb2 < 0) || (numb3 < 0))
	{
		cout << "ERROR: The numbers must be positives!!!!";
	}
	else if ((numb1 > numb2) && (numb1 > numb3))
	{
		max = numb1;
		if ((numb2 + numb3) < max)
		{
			cout << "It is IMPOSSIBLE to build a triangle!!";
		}
	}
	else if ((numb2 > numb1) && (numb2 > numb3))
	{
		max = numb2;
		if ((numb1 + numb3) < max)
		{
			cout << "It is IMPOSSIBLE to build a triangle!!";
		}
	}
	else if ((numb3 > numb1) && (numb3 > numb2))
	{
		max = numb3;
		if ((numb2 + numb2) < max)
		{
			cout << "It is IMPOSSIBLE to build a triangle!!";
		}
	}
	else
	{
		cout << "It is possible to build a triangle!";
	}

	return 0;
}

int main()
{
	//Ficha2_Ex_2_a();
	//Ficha2_Ex_2_b();
	Ficha2_Ex_2_c();

	return 0;
}
