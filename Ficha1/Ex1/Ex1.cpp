// PROG - 18/02/2020 - TP1
// Ficha 1 - Ex 1
// up201806629

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	char variable1;

	std::cout << "Write a letter or symbol: ";
	std::cin >> variable1;
	// %d displays the integer value of a character
	// %variable1 displays the actual character


	// Os especificadores de convers�o %i e %d s�o interpretados da mesma forma pelas fun��es da fam�lia fprintf(),
	// por�m, s�o interpretados de forma diferente pela fam�lia de fun��es do fscanf().
	// Ambos est�o presentes em todos os padr�es : C89, C90, C99 e C11.
	// %d � usado exclusivamente com n�meros decimais inteiros, j� o %i � usado apenas para inteiros (independente
	// se a base � octal, decimal ou hexadecimal). O %i em um fscanf() � capaz de diferenciar inteiros pelos predicados,
	// por exemplo :
			// 123 : Decimal
			// 0173 : Predicado Octal
			// 0x7B : Predicado Hexadecimal
	// Os inteiros exemplificados acima, ser�o todos interpretados como o decimal 123.


	printf("ASCII value of %variable1 = %d", variable1, variable1);

	return 0;
}
