// PROG - 10/03/2020 - TP3
// Ficha3 - Ex1
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

double area(double x1, double y1, double x2, double y2, double x3, double y3)
{
	double distance1, distance2, distance3, semiperimeter, area;
	
	distance1 = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
	distance2 = sqrt((pow((x3 - x2), 2)) + (pow((y3 - y2), 2)));
	distance3 = sqrt((pow((x1 - x3), 2)) + (pow((y1 - y3), 2)));

	semiperimeter = (distance1 + distance2 + distance3) / 2;
	area = sqrt((semiperimeter*(semiperimeter - distance1)*(semiperimeter - distance2)*(semiperimeter - distance3)));
	
	return area;
}

double distance(double x1, double y1, double x2, double y2)
{
	double dist;
	dist = sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));
	return dist;
}

int main()
{
	double x1, x2, x3, y1, y2, y3;


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
	 

	cout << "The area of the triangle is " << area(x1, y1, x2, y2, x3, y3);

	cout << "\nThe distance between the first vertex and the second is " << distance(x1, y1, x2, y2);
}
