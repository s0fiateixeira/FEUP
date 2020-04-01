// Trabalho 1
// Jogo do Ouri
// Sofia Teixeira - up201806629

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <time.h>
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
	cout << "_______________________________________________________JOGO DO OURI_______________________________________________\n\n\n";
	cout << " _________________________________________                                      _________________________________\n";
	cout << "|    |                               |    |                                    |   |                         |   |\n";
	cout << "|    | ("; cor(2);if (tabuleiro[0] >= 10) cout << tabuleiro[0]; else cout << "0" << tabuleiro[0]; cor(15); cout << ") ("; cor(2);if (tabuleiro[1] >= 10) cout << tabuleiro[1]; else cout << "0" << tabuleiro[1]; cor(15); cout << ") ("; cor(2);if (tabuleiro[2] >= 10) cout << tabuleiro[2]; else cout << "0" << tabuleiro[2]; cor(15); cout << ") ("; cor(2);if (tabuleiro[3] >= 10) cout << tabuleiro[3]; else cout << "0" << tabuleiro[3]; cor(15); cout << ") ("; cor(2);if (tabuleiro[4] >= 10) cout << tabuleiro[4]; else cout << "0" << tabuleiro[4]; cor(15); cout << ") ("; cor(2);if (tabuleiro[5] >= 10) cout << tabuleiro[5]; else cout << "0" << tabuleiro[5]; cor(15); cout << ") |    |          <-  "; cor(2); cout << "Jogador 1"; cor(15); cout << " ->          |   | ("; cor(2); cout << "a"; cor(15); cout << ") ("; cor(2); cout << "b"; cor(15); cout << ") ("; cor(2); cout << "c"; cor(15); cout << ") ("; cor(2); cout << "d"; cor(15); cout << ") ("; cor(2); cout << "e"; cor(15); cout << ") ("; cor(2); cout << "f"; cor(15); cout << ") |   |\n";
	cout << "| "; cor(2); if (pontos1 >= 10) cout << pontos1; else cout << "0" << pontos1; cor(15); cout << " |_______________________________| "; cor(9); if (pontos2 >= 10) cout << pontos2; else cout << "0" << pontos2; cor(15); cout << " |                                    | "; cor(2); cout << "0"; cor(15); cout << " |_________________________| "; cor(9); cout << "0"; cor(15); cout << " | \n";
	cout << "|    |                               |    |                                    |   |                         |   |\n";
	cout << "|    | ("; cor(9); if (tabuleiro[11] >= 10) cout << tabuleiro[11]; else cout << "0" << tabuleiro[11]; cor(15); cout << ") ("; cor(9); if (tabuleiro[10] >= 10) cout << tabuleiro[10]; else cout << "0" << tabuleiro[10]; cor(15); cout << ") ("; cor(9); if (tabuleiro[9] >= 10) cout << tabuleiro[9]; else cout << "0" << tabuleiro[9]; cor(15); cout << ") ("; cor(9); if (tabuleiro[8] >= 10) cout << tabuleiro[8]; else cout << "0" << tabuleiro[8]; cor(15); cout << ") ("; cor(9); if (tabuleiro[7] >= 10) cout << tabuleiro[7]; else cout << "0" << tabuleiro[7]; cor(15); cout << ") ("; cor(9); if (tabuleiro[6] >= 10) cout << tabuleiro[6]; else cout << "0" << tabuleiro[6]; cor(15); cout << ") |    |          <-  "; cor(9); cout << "Jogador 2"; cor(15); cout << " ->          |   | ("; cor(9); cout << "g"; cor(15); cout << ") ("; cor(9); cout << "h"; cor(15); cout << ") ("; cor(9); cout << "i"; cor(15); cout << ") ("; cor(9); cout << "j"; cor(15); cout << ") ("; cor(9); cout << "k"; cor(15); cout << ") ("; cor(9); cout << "l"; cor(15); cout << ") |   |\n";
	cout << "|____|_______________________________|____|                                    |___|_________________________|___|\n\n\n";

	return 0;
}


// Função que se encarrega de traduzir as letras que o utilizador coloca para parâmetros e verificar se o input está correto
int verificacao(char casa, int jogador,char modo_de_jogo, int tabuleiro[], size_t = 12)
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
			if (modo_de_jogo == 'a')
				cout << "Não pode escolher casas do Jogador 2!!\n Tente novamente: ";
			else if (modo_de_jogo == 's')
				cout << "Não pode escolher casas do Computador!!\n Tente novamente: ";
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



int jogada_amigo(int pontos1, int pontos2, int jogador, int tabuleiro[], size_t = 12)
{
	while (pontos1 <= 25 && pontos2 <= 25)
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
			escolha = verificacao(casa, jogador,'a', tabuleiro, 12);
		} while (escolha == -1);

		int casa_inicial = escolha;
		int n_pecas = tabuleiro[escolha];
		tabuleiro[escolha] = 0;
		int casa_final = casa_inicial;


		for (n_pecas; n_pecas > 0; n_pecas--) //para andar no sentido contrário ao do ponteiro dos relógios
		{
			escolha -= 1;
			if (escolha == casa_inicial)			//Se a casa inicial tiver 12 ou mais sementes ignora-se essa casa
			{
				n_pecas += 1;
				continue;
			}
			if (escolha < 0)
				escolha = 11;
			tabuleiro[escolha] += 1;
			casa_final -= 1;			//esta casa vai ser importante para fazer a recolha de pontos
			if (casa_final < 0)
				casa_final = 11;
		}


		//fazer a recolha de pontos
		int j;
		j = casa_final;
		if (tabuleiro[casa_final] == 2 || tabuleiro[casa_final] == 3)
		{
			if (jogador == 1 && casa_final >= 6 && casa_final <= 11)
			{
				for (j; (j >= 6 && j <= 11); j++)
					if (tabuleiro[j] == 2 || tabuleiro[j] == 3)
					{
						pontos1 += tabuleiro[j];
						tabuleiro[j] = 0;
					}
					else break;
			}
			else if (jogador == 2 && casa_final >= 0 && casa_final < 6)
			{
				for (j; (j >= 0 && j < 6); j++)
					if (tabuleiro[j] == 2 || tabuleiro[j] == 3)
					{
						pontos2 += tabuleiro[j];
						tabuleiro[j] = 0;
					}
					else break;
			}
		}


		imprimir_tabuleiro(pontos1, pontos2, tabuleiro, 12);

		// Permutar jogador no final da jogada
		if (jogador == 1)
			jogador = 2;
		else
			jogador = 1;
	

		// Verificar se o jogo acabou ou se ficou empatado
		if ((pontos1 > pontos2) && (pontos1 == 25))
			return 1;
		else if ((pontos2 > pontos1) && (pontos2 == 25))
			return 2;
		else if ((pontos1 == pontos2) && (pontos1 == 24))
			return 0;

	}
}



int jogada_sozinho(int pontos1, int pontos2, int jogador, int tabuleiro[], size_t = 12)
{
	while (pontos1 <= 25 && pontos2 <= 25)
	{
		char casa;
		int escolha;
		if (jogador == 1)
		{
			cout << "UTILIZA AS LETRAS DO TABULEIRO DO LADO COMO REFERÊNCIA\n";
			cout << "Escolhe a casa (";     //dar print com cor adequada
			cor(2);
			cout << "Jogador";
			cor(15);
			cout << ") - ";
			// Este ciclo serve para tratar os dados caso o input dado pelo utilizador não seja válido (validado na função verificacao que retorna -1 se houver um erro)
			do      // assegura que faz (pelo menos) uma vez
			{
				cin >> casa;
				escolha = verificacao(casa, jogador,'s', tabuleiro, 12);
			} while (escolha == -1);
		}
		else if (jogador == 2)
		{
			cout << "O ";
			cor(9);
			cout << "Computador";
			cor(15);
			cout << " está a escolher a peça...\n";
			do
			{
				srand(time(0));            // time(0) refere-se ao tempo atual, portanto a função rand vai gerar números diferentes de cada vez
				escolha = (rand() % 6 + 6);			// gera um número aleatório entre 6 e 11
			} while (tabuleiro[escolha] == 0);
		}

		int casa_inicial = escolha;
		int n_pecas = tabuleiro[escolha];
		tabuleiro[escolha] = 0;
		int casa_final = casa_inicial;


		for (n_pecas; n_pecas > 0; n_pecas--) //para andar no sentido contrário ao do ponteiro dos relógios
		{
			escolha -= 1;
			if (escolha == casa_inicial)			//Se a casa inicial tiver 12 ou mais sementes ignora-se essa casa
			{
				n_pecas += 1;
				continue;
			}
			if (escolha < 0)
				escolha = 11;
			tabuleiro[escolha] += 1;
			casa_final -= 1;			//esta casa vai ser importante para fazer a recolha de pontos
			if (casa_final < 0)
				casa_final = 11;
		}


		//fazer a recolha de pontos
		int j;
		j = casa_final;
		if (tabuleiro[casa_final] == 2 || tabuleiro[casa_final] == 3)
		{
			if (jogador == 1 && casa_final >= 6 && casa_final <= 11)
			{
				for (j; (j >= 6 && j <= 11); j++)
					if (tabuleiro[j] == 2 || tabuleiro[j] == 3)
					{
						pontos1 += tabuleiro[j];
						tabuleiro[j] = 0;
					}
					else break;
			}
			else if (jogador == 2 && casa_final >= 0 && casa_final < 6)
			{
				for (j; (j >= 0 && j < 6); j++)
					if (tabuleiro[j] == 2 || tabuleiro[j] == 3)
					{
						pontos2 += tabuleiro[j];
						tabuleiro[j] = 0;
					}
					else break;
			}
		}

		if (jogador == 1)
			imprimir_tabuleiro(pontos1, pontos2, tabuleiro, 12);
		else if (jogador == 2)
		{
			system("PAUSE");
			imprimir_tabuleiro(pontos1, pontos2, tabuleiro, 12);
		}

		// Permutar jogador no final da jogada
		if (jogador == 1)
			jogador = 2;
		else
			jogador = 1;


		// Verificar se o jogo acabou ou se ficou empatado
		if ((pontos1 > pontos2) && (pontos1 == 25))
			return 1;
		else if ((pontos2 > pontos1) && (pontos2 == 25))
			return 2;
		else if ((pontos1 == pontos2) && (pontos1 == 24))
			return 0;

	}
}




int inicio_do_jogo(char modo_jogo)
{
	if (modo_jogo == 'R' || modo_jogo == 'r')			//Mostra as regras do jogo
	{
		system("CLS");
		cor(4);
		cout << "Objetivo";
		cor(15);
		cout << " - O jogo começa com 4 sementes em cada casa. O objetivo do jogo é\n   capturar o maior número de sementes do jogador adversário. Como são 48 sementes\n   no total, basta capturar 25 para ganhar o jogo, sendo, no entanto, possível\n   empatar uma partida.\n";
		cor(4);
		cout << "Semear";
		cor(15);
		cout << " - Os jogadores têm turnos para mover as sementes.Numa jogada um jogador\n   escolhe uma das 6 casas no seu controlo (da respetiva cor). As sementes dessa casa\n   são todas removidas e distribuídas deixando cair uma em cada casa no sentido\n   contrário ao dos ponteiros de um relógio, num processo chamado semear. As sementes\n   não são distribuídas nas casas de pontuação (nas pontas do tabuleiro) nem na casa\n   onde as sementes são retiradas inicialmente (esta tem de permanecer vazia durante a\n   jogada, mesmo contendo 12 ou mais sementes, sendo passada à frente). Sabendo o número\n   de sementes de cada casa é importante jogar com estratégia!\n";
		cor(4);
		cout << "Capturar";
		cor(15);
		cout << " - para se capturar as sementes do adversário, esta terá de ter 2 ou 3\n   sementes na última casa jogada, após este ter acabado de semear. Assim, este\n   captura as sementes da última casa jogada e possivelmente mais, se as casas\n   anteriores também tiverem 2 ou 3 sementes, até que se encontre uma casa do adversário\n   que não tenha este número de sementes ou até chegar a uma casa do próprio jogador.\n   As sementes capturadas são colocadas automaticamente na casa de pontuação do jogador\n   que está a jogar.Cada jogador deve ter em consideração que a sua jogada deve ser feita\n   para deixar que o adversário possa continuar a jogar. Isto é, se o jogador adversário\n   tiver as casas todas vazias, o jogador atual deve mover as sementes de maneira a permitir\n   a jogada seguinte.\n\n\n";
		system("PAUSE");
		return -1;						// Retorna -1 para que continue a perguntar ao jogador quais dos modos este prefere jogar
	}
	else if (modo_jogo == 'S' || modo_jogo == 's')					//Joga no modo sozinho
	{
		system("CLS");
		cout << "És tu a iniciar o jogo. Vais jogar como ";
		cor(2);
		cout << "Jogador";
		cor(15);
		cout << ". O teu adversário é o ";
		cor(9);
		cout << "Computador";
		cor(15);
		cout << ". Boa sorte!\n\n";
		system("PAUSE");     //pausa o ecrã e só continua quando se clica numa tecla
		system("CLS");       //limpa o ecrã

		//tabuleiro inicial
		int tabuleiro_inicial[12] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
		int pontos_jogador1, pontos_jogador2;
		pontos_jogador1 = 0;
		pontos_jogador2 = 0;

		imprimir_tabuleiro(pontos_jogador1, pontos_jogador2, tabuleiro_inicial, 12);
		int vencedor = jogada_sozinho(pontos_jogador1, pontos_jogador2, 1, tabuleiro_inicial, 12);

		//Anuncia o vencedor do jogador (ou se é empate)
		system("CLS");
		if (vencedor == 1)
		{
			cout << "Ganhaste a partida! ";
			cor(2);
			cout << "PARABÉNS";
			cor(15);
			cout << "!!!";
		}
		else if (vencedor == 2)
		{
			cout << "O ";
			cor(9);
			cout << "Computador";
			cor(15);
			cout << " ganhou a partida! Tenta ganhar na próxima vez!";
		}
		else if (vencedor == 0)
		{
			cor(2);
			cout << "Tu";
			cor(15);
			cout << " e o ";
			cor(9);
			cout << "Computador";
			cor(15);
			cout << " empataram a partida!!";
		}
		return 0;
	}
	else if (modo_jogo == 'A' || modo_jogo == 'a')							// Joga no modo com amigo
	{
		system("CLS");
		cout << "O jogador a iniciar o jogo é o ";
		cor(2);
		cout << "Jogador 1\n\n";
		cor(15);
		system("PAUSE");     //pausa o ecrã e só continua quando se clica numa tecla
		system("CLS");       //limpa o ecrã

		//tabuleiro inicial
		int tabuleiro_inicial[12] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
		int pontos_jogador1, pontos_jogador2;
		pontos_jogador1 = 0;
		pontos_jogador2 = 0;

		imprimir_tabuleiro(pontos_jogador1, pontos_jogador2, tabuleiro_inicial, 12);
		int vencedor = jogada_amigo(pontos_jogador1, pontos_jogador2, 1, tabuleiro_inicial, 12);

		//Anuncia o vencedor do jogador (ou se é empate)
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
	else
	{
		cout << "A opção que escolheu não é válida! Tente novamente: \n";
		system("PAUSE");
		return -1;
	}

}



int main()
{
	char modo_jogo;
	int modo;
	// Este ciclo serve para tratar os dados caso o input dado pelo utilizador não seja válido (validado na função inicio_do_jogo que retorna -1 se houver um erro)
	do      // assegura que faz (pelo menos) uma vez
	{
		system("CLS");
		cout << "_______________________________________________________JOGO DO OURI__________________________________________________\n\n";
		cout << "Escolhe a opção que preferes!!!!\n";
		cout << "Rever as regras do Jogo    -     R\n";
		cout << "Jogar sozinho              -     S\n";
		cout << "Jogar com um amigo         -     A\n\n";
		cin >> modo_jogo;
		modo = inicio_do_jogo(modo_jogo);
	} while (modo == -1);

	return 0;
}