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


	// Os especificadores de conversão %i e %d são interpretados da mesma forma pelas funções da família fprintf(),
	// porém, são interpretados de forma diferente pela família de funções do fscanf().
	// Ambos estão presentes em todos os padrões : C89, C90, C99 e C11.
	// %d é usado exclusivamente com números decimais inteiros, já o %i é usado apenas para inteiros (independente
	// se a base é octal, decimal ou hexadecimal). O %i em um fscanf() é capaz de diferenciar inteiros pelos predicados,
	// por exemplo :
			// 123 : Decimal
			// 0173 : Predicado Octal
			// 0x7B : Predicado Hexadecimal
	// Os inteiros exemplificados acima, serão todos interpretados como o decimal 123.


	printf("ASCII value of %variable1 = %d", variable1, variable1);

	return 0;
}
