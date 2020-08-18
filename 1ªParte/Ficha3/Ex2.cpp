// PROG - 10/03/2020 - TP3
// Ficha3 - Ex2
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;


const char* isPrime(int n)
{
	int sum = 0;
	const char* result;

	for (int i = 2; i <= (sqrt(n)); i++)
	{
		if (i % n != 0)
		{
			sum = sum + 1;
		}
	}
	if (sum == 0)
	{
		result = "It is a prime number";
	}
	else
	{
		result = "It is NOT a prime number";
	}

	return result;
}


int main()
{
	int number;
    cout << "Let's test if it is a prime number!\nChoose an integer number:";
	cin >> number;
	cout << isPrime(number);
}