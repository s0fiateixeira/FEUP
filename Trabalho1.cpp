// Trabalho 1
// Oware Game
// Sofia Teixeira - up201806629

#include "pch.h"
#include <iostream>
#include <windows.h>
using namespace std;

void cor(unsigned int color) //Parte de código fornecida pelo professor para manipular cor do texto na consola
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
	/*
COLOR CODES:
1   blue
2   green
3   cyan
4   red
5   magenta
6   brown
7   lightgray
8   darkgray
9   lightblue
10  lightgreen
11  lightcyan
12  lightred
13  lightmagenta
14  yellow
15  white
*/
}


// Função que se encarrega de dar print ao tabuleiro com as cores indicadas
int imprimir_tabuleiro(int pontos1, int pontos2, int tabuleiro[], size_t = 12)
{
	system("CLS");
	cout << "________________________________________________OWARE GAME_______________________________________________\n\n\n";
	cout << " _________________________________                                      _________________________________\n";
	cout << "|   |                         |   |                                    |   |                         |   |\n";
	cout << "|   | ("; cor(2); cout << tabuleiro[0]; cor(15); cout << ") ("; cor(2); cout << tabuleiro[1]; cor(15); cout << ") ("; cor(2); cout << tabuleiro[2]; cor(15); cout << ") ("; cor(2); cout << tabuleiro[3]; cor(15); cout << ") ("; cor(2); cout << tabuleiro[4]; cor(15); cout << ") ("; cor(2); cout << tabuleiro[5]; cor(15); cout << ") |   |          <-  "; cor(2); cout << "Jogador 1"; cor(15); cout << " ->          |   | ("; cor(2); cout << "a"; cor(15); cout << ") ("; cor(2); cout << "b"; cor(15); cout << ") ("; cor(2); cout << "c"; cor(15); cout << ") ("; cor(2); cout << "d"; cor(15); cout << ") ("; cor(2); cout << "e"; cor(15); cout << ") ("; cor(2); cout << "f"; cor(15); cout <<") |   |\n";
	cout << "| "; cor(2); cout << pontos1; cor(15); cout << " |_________________________| "; cor(9); cout << pontos2; cor(15); cout << " |                                    | "; cor(2); cout << "0"; cor(15); cout << " |_________________________| "; cor(9); cout << "0"; cor(15); cout << " | \n";
	cout << "|   |                         |   |                                    |   |                         |   |\n";
	cout << "|   | ("; cor(9); cout << tabuleiro[11]; cor(15); cout << ") ("; cor(9); cout << tabuleiro[10]; cor(15); cout << ") ("; cor(9); cout << tabuleiro[9]; cor(15); cout << ") ("; cor(9); cout << tabuleiro[8]; cor(15); cout << ") ("; cor(9); cout << tabuleiro[7]; cor(15); cout << ") ("; cor(9); cout << tabuleiro[6]; cor(15); cout << ") |   |          <-  "; cor(9); cout << "Jogador 2"; cor(15); cout << " ->          |   | ("; cor(9); cout << "g"; cor(15); cout << ") ("; cor(9); cout << "h"; cor(15); cout << ") ("; cor(9); cout << "i"; cor(15); cout << ") ("; cor(9); cout << "j"; cor(15); cout << ") ("; cor(9); cout << "k"; cor(15); cout << ") ("; cor(9); cout << "l"; cor(15); cout << ") |   |\n";
	cout << "|___|_________________________|___|                                    |___|_________________________|___|\n\n\n";

	return 0;
}




// Função que se encarrega de traduzir as letras que o utilizador coloca para parâmetros e verificar se o input está correto
int verificacao(char casa, int jogador, int tabuleiro[], size_t = 12)
{
	//verificar se a casa escolhida pelo jogador 1 é válida
	if (jogador == 1)
	{
		if (casa == 'a' || casa == 'A')
		{
			if (tabuleiro[0] == 0)     //verificar se a casa escolhida está vazia
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 0;
		}
		else if (casa == 'b' || casa == 'B')
		{
			if (tabuleiro[1] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 1;
		}
		else if (casa == 'c' || casa == 'C')
		{
			if (tabuleiro[2] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 2;
		}
		else if (casa == 'd' || casa == 'D')
		{
			if (tabuleiro[3] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 3;
		}
		else if (casa == 'e' || casa == 'E')
		{		
			if(tabuleiro[4] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 4;
		}
		else if (casa == 'f' || casa == 'F')
		{		
			if (tabuleiro[5] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 5;
		}
		else if (casa == 'g' || casa == 'G' || casa == 'h' || casa == 'H' || casa == 'i' || casa == 'I' || casa == 'j' || casa == 'J' || casa == 'k' || casa == 'K' || casa == 'l' || casa == 'L')
		{
			cout << "Não pode escolher casas do Jogador 2!!\n Tente novamente: ";
			return(-1);
		}
		else
		{
			cout << "Casa inválida!!!\n Tente novamente: ";
			return(-1);
		}
	}
	//verificar se a casa escolhida pelo jogador 2 é válida
	else if (jogador == 2)
	{
		if (casa == 'a' || casa == 'A' || casa == 'b' || casa == 'B' || casa == 'c' || casa == 'C' || casa == 'd' || casa == 'D' || casa == 'e' || casa == 'E' || casa == 'f' || casa == 'F')
		{
			cout << "Não pode escolher casas do Jogador 1!!\n Tente novamente: ";
			return(-1);
		}
		else if (casa == 'g' || casa == 'G')
		{
			if (tabuleiro[11] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 11;
		}
		else if (casa == 'h' || casa == 'H')
		{
			if (tabuleiro[10] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 10;
		}
		else if (casa == 'i' || casa == 'I')
		{
			if (tabuleiro[9] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 9;
		}
		else if (casa == 'j' || casa == 'J')
		{
			if (tabuleiro[8] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 8;
		}
		else if (casa == 'k' || casa == 'K')
		{
			if (tabuleiro[7] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 7;
		}
		else if (casa == 'l' || casa == 'L')
		{
			if (tabuleiro[6] == 0)
			{
				cout << "Não pode escolher uma casa sem sementes!!!\n Tente novamente: ";
				return(-1);
			}
			return 6;
		}
		else
		{
			cout << "Casa inválida!!!\n Tente novamente: ";
			return(-1);
		}
	}
}



int jogada(int pontos1, int pontos2, int jogador, int tabuleiro[], size_t = 12)
{
	// Verificar se o jogo acabou ou se ficou empatado
	if (pontos1 >= 25)
		return 1;
	else if (pontos2 >= 25)
		return 2;
	else if (pontos1 == 24 && pontos2 == 24)
		return 0;

	while (pontos1 <= 24 && pontos2 <= 24)
	{
		char casa;
		int escolha;
		cout << "UTILIZA AS LETRAS DO TABULEIRO DO LADO COMO REFERÊNCIA\n";
		cout << "Escolhe a casa (";     //dar print com cor adequada
		if (jogador == 1) {
			cor(2);
			cout << "Jogador 1";
		}
		else if (jogador == 2)
		{
			cor(9);
			cout << "Jogador 2";
		}
		cor(15);
		cout << ") - ";
		
		// Este ciclo serve para tratar os dados caso o input dado pelo utilizador não seja válido (validado na função verificacao que retorna -1 se houver um erro)
		do      // assegura que faz (pelo menos) uma vez
		{
			cin >> casa;
			escolha = verificacao(casa, jogador, tabuleiro, 12);
		}
		while (escolha == -1);

		int i = tabuleiro[escolha];
		int n_pecas = tabuleiro[escolha]; //criei variáveis iguais com nomes diferentes porque o i vai iterar, mas o n_pecas deverá ficar constante
		tabuleiro[escolha] = 0;
			
		for (i; i > 0; i--) //para andar no sentido contrário ao do ponteiro dos relógios
		{
			/*if (n_pecas >= 12)   //passar à frente a casa escolhida se esta tiver 12 ou mais peças 
				continue;*/
			escolha -= 1;
			if (escolha < 0)
				escolha = 11;
			tabuleiro[escolha] += 1;
		}


		//fazer a recolha de pontos
		if (jogador == 1)
		{
			for (i; i <= 5 ; i++)
				if (tabuleiro[i] == 2 || tabuleiro[i] == 3)
				{
					pontos1 += tabuleiro[i];
					tabuleiro[i] = 0;
				}
		}
		else if (jogador == 2)
		{
			for (i; (i >= 6 && i <= 11); i++)
				if (tabuleiro[i] == 2 || tabuleiro[i] == 3)
				{
					pontos2 += tabuleiro[i];
					tabuleiro[i] = 0;
				}
		}

		imprimir_tabuleiro(pontos1, pontos2, tabuleiro, 12);

		// Permutar jogador no final da jogada
		if (jogador == 1)
			jogador = 2;
		else
			jogador = 1;

	}
}



int main()
{
	cout << "OWARE GAME";
	cout << "O jogador a iniciar o jogo é o ";
	cor(2);
	cout << "Jogador 1\n";
	cor(15);
	system("PAUSE");     //pausa o ecrã e só continua quando se clica numa tecla
	system("CLS");       //limpa o ecrã

	//tabuleiro inicial
	int tabuleiro_inicial[12] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
	int pontos_jogador1, pontos_jogador2;
	pontos_jogador1 = 0;
	pontos_jogador2 = 0;
	
	imprimir_tabuleiro(pontos_jogador1, pontos_jogador2, tabuleiro_inicial, 12);
	int vencedor = jogada(pontos_jogador1, pontos_jogador2, 1,tabuleiro_inicial, 12);

	system("CLS");
	if (vencedor == 1)
	{
		cout << "O ";
		cor(2);
		cout << "Jogador 1";
		cor(15);
		cout << " ganhou a partida! PARABÉNS!!!";
	}
	else if (vencedor == 2)
	{
		cout << "O ";
		cor(9);
		cout << "Jogador 2";
		cor(15);
		cout << " ganhou a partida! PARABÉNS!!!";
	}
	else if (vencedor == 0)
	{
		cout << "O ";
		cor(2);
		cout << "Jogador 1";
		cor(15);
		cout << " e o ";
		cor(9);
		cout << "Jogador 2";
		cor(15);
		cout << " empataram a partida!!";
	}

	return 0;
}