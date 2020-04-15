// PROG - 24/02/2020 - TPC1
// Ficha1 - Exercício 6
// up201806629

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	//int x1, x2, x3, y1, y2, y3;
	float x1, x2, x3, y1, y2, y3, distance1, distance2, distance3, semiperimeter, area;

	//float - vírgula flutuante, abrange menos que o double - vírgula flutuante com dupla precisão


    cout << "________CALCULATING TRIANGLE'S AREA_______\n"; 
	cout << "Coordinates of the first vertex:\n x1 - ";
	cin >> x1;
	cout << " y1 - ";
	cin >> y1;
	cout << "Coordinates of the second vertex:\n x2 - ";
	cin >> x2;
	cout << " y2 - ";
	cin >> y2;
	cout << "Coordinates of the third vertex:\n x3 - ";
	cin >> x3;
	cout << " y3 - ";
	cin >> y3;

	distance1 = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
	distance2 = sqrt((pow((x3 - x2), 2)) + (pow((y3 - y2), 2)));
	distance3 = sqrt((pow((x1 - x3), 2)) + (pow((y1 - y3), 2)));

	semiperimeter = (distance1 + distance2 + distance3) / 2;
	area = sqrt((semiperimeter*(semiperimeter - distance1)*(semiperimeter - distance2)*(semiperimeter - distance3)));


	cout << "The area is " << area;

	return 0;
}
