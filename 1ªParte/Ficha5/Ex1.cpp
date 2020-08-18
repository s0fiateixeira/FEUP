// PROG - 14/04/2020 - TP6
// Ficha5 - Ex1
// up201806629

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


char encryptChar(char c, int key)
{
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char alphab[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int index, newIndex;
	char newLetter;

	if (isupper(c))
	{
		for (int j = 0; j < 26; j++)
		{
			if (alphab[j] == c)
			{
				index = j;			     // Encontrar índice da letra (c)
			}
			continue;
		}
		newIndex = index;
		if (key >= 0)
		{
			for (int i = key; i != 0; i--)
			{
				newIndex += 1;
				if (newIndex > 25)
					newIndex = 0;
			}
		}
		else
		{
			for (int i = key; i != 0; i++)
			{
				newIndex -= 1;
				if (newIndex < 0)					// Encontrar o novo índice
					newIndex = 25;
			}
		}
		newLetter = alphab[newIndex];
	}
	else
	{
		for (int j = 0; j < 26; j++)
		{
			if (alphabet[j] == c)
			{
				index = j;
			}
			continue;
		}
		newIndex = index;
		if (key >= 0)
		{
			for (int i = key; i != 0; i--)
			{
				newIndex += 1;
				if (newIndex > 25)
					newIndex = 0;
			}
		}
		else
		{
			for (int i = key; i != 0; i++)
			{
				newIndex -= 1;
				if (newIndex < 0)
					newIndex = 25;
			}
			newLetter = alphabet[newIndex];
		}
	}
	cout << newLetter;
	return newLetter;
}

string encryptString(string s, int key)
{
	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char alphab[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	int index, newIndex;
	char newLetter;
	for (int k = s.length(); k >= 0; k--)
	{
		index = k;
		if (s[k] == ' ' || s[k] == ',' || s[k] == '.' || s[k] == '-' || s[k] == '!' || s[k] == '?')
			continue;
		if (isupper(s[k]))
		{
			for (int j = 0; j < 26; j++)
			{
				if (alphab[j] == s[k])
				{
					index = j;			     // Encontrar índice da letra (c)
				}
				continue;
			}
			newIndex = index;
			if (key >= 0)
			{
				for (int i = key; i != 0; i--)
				{
					newIndex += 1;
					if (newIndex > 25)
						newIndex = 0;
				}
			}
			else
			{
				for (int i = key; i != 0; i++)
				{
					newIndex -= 1;
					if (newIndex < 0)					// Encontrar o novo índice
						newIndex = 25;
				}
			}
			newLetter = alphab[newIndex];
			s[k] = newLetter;
		}
		else
		{
			for (int j = 0; j < 26; j++)
			{
				if (alphabet[j] == s[k])
				{
					index = j;
				}
				continue;
			}
			newIndex = index;
			if (key >= 0)
			{
				for (int i = key; i != 0; i--)
				{
					newIndex += 1;
					if (newIndex > 25)
						newIndex = 0;
				}
			}
			else
			{
				for (int i = key; i != 0; i++)
				{
					newIndex -= 1;
					if (newIndex < 0)
						newIndex = 25;
				}
			}
			newLetter = alphabet[newIndex];
			s[k] = newLetter;
		}
	}
	cout << s;
	return s;
}




char main()
{
	//encryptChar('A', 3);					//D
	//encryptChar('B', 3);					//E
	//encryptChar('Z', 3);					//C
	//encryptChar('a', -3);					//x
	//encryptChar('d', -3);					//a

	//encryptString("BomDia", 3);			//ErpGld
	//encryptString("Pessoalz", -7);		//Ixllhtes
	//encryptString("Bom dia, Joao!", -24);	//Dqo fkc, Lqcq!
	
	/*string newString;
	cout << "Escreve uma frase para ser encriptada:\n";
	getline(cin, newString);
	cout << "\n";
	*/
	//encryptString(newString, 10);			//Dro aesmu lbygx pyh TEWZC yfob dro vkji nyq
	//encryptString(newString, -10);			//Jxu gkysa rhemd ven ZKCFI eluh jxu bqpo tew


}