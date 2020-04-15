// PROG - 18/02/2020 - TP1
// Ficha1 - Ex2
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	float num1, num2, num3, media, a, b, c;

    cout << "Write three numbers:\nA: "; 
	cin >> num1;
	cout << "B: ";
	cin >> num2;
	cout << "C: ";
	cin >> num3;

	media = (num1 + num2 + num3) / 3;
	a = (num1 - media);
	b = (num2 - media);
	c = (num3 - media);

	cout << "média = " << media << "\nA-média = " << a << "\nB-média = " << b << "\nC-média = " << c;
}
