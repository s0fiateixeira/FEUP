// PROG - 17/03/2020 - TP4
// Ficha4 - Ex1
// up201806629
// alínea a e b completas; alínea c por completar

#include "pch.h"
#include <iostream>
using namespace std;


   // Ficha4 - Ex. 1.a)
// Write a function, whose prototype is void readArray(int a[], size_t nElem),
// which reads from the keyboard the elements of an array of integers, a[];
// the number of elements to be read is nElem.The space for the array must be
// allocated statically, before calling the function.Before reading each element
// of the array, the respective index must be displayed on the screen.

void readArray(int a[], size_t nElem)
{
	cout << "Choose the elements (must be integer numbers!!)\n";
	for (int i = 0; i <= (nElem-1); i++)
	{
		cout << i << " -> ";
		cin >> a[i];
	}

	return;
}


   // Ficha4 - Ex. 1.b)
// Write a function, whose prototype is int findValueInArray(const int a[],
// size_t nElem, int value, size_t pos1, size_t pos2) which searches the nElem
// elements of the array, between indexes(positions) pos1 and pos2, inclusive,
// for the first occurrence of value. If value is found, the function must
// return the index(position) of the corresponding element of the array;
// otherwise it must return -1.


int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2)
{
	
	for (int i = pos1; i <= pos2; i++)
	{
		if (a[i] == value)
			return i;
	}
	return -1;
}

bool Test(const int a[], size_t nElem, int value, size_t pos1, size_t pos2)
{
	// Ficha4 - Ex. 1.a)
	cout << "____________________TESTING FIRST PROGRAM____________________";
	int nTests;
	cout << "How many times do you want to test the first program? ";
	cin >> nTests;
	for (int j = 0; j <= nTests; j++)
	{
		cout << "_______________________________________________Try number " << j;
		int len;
		cout << "How many elements do you want? ";
		cin >> len;
		int a[1000];
		readArray(a, len);
	}


	// Ficha4 - Ex. 1.b)
	int pos1, pos2, value, len;
	int a[1000];
	cout << "How many elements do you want in your array? ";
	cin >> len;
	cout << "Choose the elements (must be integer numbers!!)\n";
	for (int i = 0; i <= (len - 1); i++)
	{
		cout << i << " -> ";
		cin >> a[i];
	}
	cout << "Which is the value you are looking for? ";
	cin >> value;
	cout << "Which index do you want to start the search? ";
	cin >> pos1;
	cout << "Which index do you want to finish the search? ";
	cin >> pos2;
	cout << "\nThe index is: " << findValueInArray(a, len, value, pos1, pos2);


}



int main()
{
	/*
	// Ficha4 - Ex. 1.a)
	int len;
	cout << "How many elements do you want? ";
	cin >> len;
	int a[1000];
	readArray(a, len);
	*/



	// Ficha4 - Ex. 1.b)
	int pos1, pos2, value, len;
	int a[1000];
	cout << "How many elements do you want in your array? ";
	cin >> len;
	cout << "Choose the elements (must be integer numbers!!)\n";
	for (int i = 0; i <= (len - 1); i++)
	{
		cout << i << " -> ";
		cin >> a[i];
	}
	cout << "Which is the value you are looking for? ";
	cin >> value;
	cout << "Which index do you want to start the search? ";
	cin >> pos1;
	cout << "Which index do you want to finish the search? ";
	cin >> pos2;
	cout << "\nThe index is: " << findValueInArray(a, len, value, pos1, pos2);






	return 0;
}




//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
///*
//Write a function, whose prototype is void readArray(int a[], size_t nElem),
// which reads from the keyboard the elements of an array of integers, a[];
//the number of elements to be read is nElem. The space for the array must
//be allocated statically, before calling the function. Before reading
//each element of the array, the respective index must be displayed on
//the screen.
//*/
//
//void readArray(int a[], size_t nElem)
//{
//	for (size_t i = 0; i < nElem; i++) {
//		cout << i << "? ";
//		cin >> a[i];
//	}
//}
//
///*b) Write a function, whose prototype is int findValueInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2) which searches the nElem elements of the array, between indexes (positions) pos1 and pos2, inclusive,
//for the first occurrence of value. If value is found, the function must return the index (position) of the corresponding element of the array; otherwise it must return -1.*/
//
//int findValueInArray(
//	const int a[],
//	size_t nElem,
//	int value,
//	size_t pos1,
//	size_t pos2)
//{
//	// a = {1, 2, 3, 4, 5}
//	// nElem = 5
//	// value = 3
//	// pos1 = 0
//	// pos2 = 4
//
//	for (size_t i = pos1; i <= pos2; i++) {
//		if (a[i] == value) {
//			return i;
//		}
//	}
//
//	return -1;
//}
//
///*
//e) Modify the function findValueInArray() to obtain a new function size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[]) that, if there are multiple occurrences of value in a[],
//returns the indexes of those occurrences through parameter index[]. The value returned by the function must be the number of occurrences, that is, the number of valid elements of index[]. In C language, is it be possible that the name of this function is also findValueInArray, like the previous function? And in C++ language?
//*/
//
//size_t findMultValuesInArray(const int a[], size_t nElem, int value, size_t pos1, size_t pos2, size_t index[])
//{
//	// a = {1, 2, 3, 4, 5}
//	// nElem = 5
//	// value = 3
//	// pos1 = 0
//	// pos2 = 4
//
//	size_t n = 0;
//	for (size_t i = pos1; i <= pos2; i++) {
//		if (a[i] == value) {
//			index[n] = i;
//			n++;
//		}
//	}
//
//	return n;
//}
//
//
//int main()
//{
//	int len;
//	cout << "How many elements do you want in your array?" << endl;
//	cin >> len;
//
//	int a[len];
//	readArray(a, len);
//
//
//	cout << "Qual o valor a procurar? ";
//	int value;
//	cin >> value;
//
//	int pos1, pos2;
//	cout << "Qual o pos1? ";
//	cin >> pos1;
//	cout << "Qual o pos2? ";
//	cin >> pos2;
//
//	int index = findValueInArray(a, len, value, pos1, pos2);
//
//	cout << "Index found: " << index << endl;
//
//	size_t indices[len];
//	size_t n = findMultValuesInArray(a, len, value, pos1, pos2, indices);
//
//	for (size_t i = 0; i < n; i++)
//		cout << "Found: " << indices[i] << endl;
//
//	return 0;
//}




