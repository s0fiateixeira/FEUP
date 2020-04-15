// PROG - 09/03/2020 - TPC2
// Ficha2 - Ex7
// up201806629

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;


int Ex_2_7_a()
{
	int i, number, modules;

	modules = 0;
	cout << "Which number do you want?";
	cin >> number;

	for (i = 2; i <= sqrt(number); i++)
	{
		modules += (i % number);
	}

	if (modules == 0)
	{
		cout << "It is a prime number";
	}
	else
	{
		cout << "It is NOT a prime number";
	}

	return 0;
}



int Ex_2_7_b()
{
	int i, modules;

	modules = 0;
	cout << "Prime numbers lower than 1000:\n";

	for (i = 0; i <= sqrt(1000); i++)
	{
		//modules = (i % number);
		if (modules != 0)
		{
			cout << i << "\n";
		}
	}


	return 0;
}


int Ex_2_7_c()
{
	int i, modules, prime_numbers;

	modules = 0;
	prime_numbers = 0;
	cout << "The first 100 prime numbers:\n";

	for (i = 2; prime_numbers < 100; i++)
	{
		//modules = (i % number);
		if (modules != 0)
		{
			cout << i << "\n";
		}
		prime_numbers += 1;
	}

	return 0;
}


int Ex_2_7_d()
{
	int i, modules, prime_numbers, tamanho, largest_number;

	modules = 0;
	prime_numbers = 0;
	tamanho = 8*sizeof(unsigned long);
	cout << "The largest prime number that can be stored in a varible of type unsigned long:\n";
	largest_number = pow(2, 32) - 1;

	for (i = 2; i <= sqrt(largest_number); i++)
	{
		modules = (i % number);
		if (modules != 0)
		{
			cout << i << "\n";
		}
		prime_numbers += 1;
	}

	return 0;
}



int main()
{
	//Ex_2_7_a();
	//Ex_2_7_b();
	//Ex_2_7_c();
	Ex_2_7_d();
	return 0;
}

