// PROG - 08/03/2020 - TPC2
// Ficha2 - Ex5
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

/* Write a program to determine and write the amount that a depositor can
withdraw from the bank, after n years of depositing an amount q, where j%
is the annual interest rate. The values of n, q and j must be specified by
the user. Assume that interest at the end of each year is accrued to the
deposited amount.*/

int main()
{
	float n, q, j, real_j, bank;

    cout << "______________________Deposit Calculator_________________________\n";
	cout << "How many years? ";
	cin >> n;
	cout << "The amount of the deposit? (in €uros) - ";
	cin >> q;
	cout << "What is the interest rate? (in percentage) - ";
	cin >> j;

	real_j = j / 100;

	bank = q * ((pow(1 + j, n) - 1) / j);

	cout << "The depositor can withdraw " << bank << "€ from the bank";

	return 0;
}
