// PROG - 06/06/2020
// Ficha4 - Ex3
// up201806629
// alínea a por completar

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

/*
Ficha 4 - Exercício 3 - a)
The bubblesort method, for sorting the elements of a vector with N elements,
consists of the following :
-scan the vector, starting at the 1st element(index = 0), comparing the elements
of indexes i and i + 1 of the vector, and changing their position if they are out
of order; after this step, the largest (or smallest, depending on whether the
sorting is done in ascending or descending order) will be in the correct
position(the last position of the vector);
-repeat the previous step, considering in each iteration only the elements not
yet in the correct position; note that, after the 2nd iteration the last 2
elements will be in the correct position, after the 3rd iteration the last 3
elements will be in the correct position, and so on.
Write a function void bubbleSort(vector<int> &v) that implements this
sorting method to sort a vector of integer values in ascending order.
*/

void bubbleSort(vector<int> &v)
{

	for (int i = 0; i < v.size(); i++)
	{
		if (v(i) > v(i + 1))
		{

		}
	}


}



int main()
{
 
	return 0;
}