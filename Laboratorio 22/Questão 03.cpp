#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<locale.h>
using namespace std;

struct Prato {
	char nome[40]; 
	float preco;
};

int main() {
	setlocale(LC_ALL, "portuguese");
	Prato tipos[10];
	char opcao[4];
	short escolha;
	long long conta = 0;
		strcpy(tipos[0].nome, "Ostras de Coffin Bay");
		tipos[0].preco = 1700;
		strcpy(tipos[1].nome, "Queijo pule");
		tipos[1].preco = 5300;
		strcpy(tipos[2].nome, "Vinagre bals�mico");
		tipos[2].preco = 10600;
		strcpy(tipos[3].nome, "Trufas brancas de Alba");
		tipos[3].preco = 31800;
		strcpy(tipos[4].nome, "Mel �lfico");
		tipos[4].preco = 37000;
		strcpy(tipos[5].nome, "Mel�o Yubari King");
		tipos[5].preco = 53000;
		strcpy(tipos[6].nome, "Ninho de p�ssaro");
		tipos[6].preco = 53000;
		strcpy(tipos[7].nome, "Uvas Ruby Roman");
		tipos[7].preco = 75000;
		strcpy(tipos[8].nome, "Fungo Caterpillar");
		tipos[8].preco = 95400;
		strcpy(tipos[9].nome, "Caviar �Almas� Beluga");
		tipos[9].preco = 132500;
		cout << "Seja bem vindo ao RESTAURANTE mais CARO do MUNDO: \n";
		cout << "Segue abaixo o card�pio com as seguintes op��es: \n";
		while(strcmp(opcao,"nao")){
		for (short i = 0; i < 10; i++) {
			cout << "Prato " << i << ": " << tipos[i].nome << "   Pre�o : " << tipos[i].preco << "\n";
		}
		cout << "Deseja pedir qual para a sua refei��o?:\n";
		cin >> escolha;
		switch (escolha) {
		case 0: conta = conta + tipos[0].preco; break;
		case 1: conta = conta + tipos[1].preco; break;
		case 2: conta = conta + tipos[2].preco; break;
		case 3: conta = conta + tipos[3].preco; break;
		case 4: conta = conta + tipos[4].preco; break;
		case 5: conta = conta + tipos[5].preco; break;
		case 6: conta = conta + tipos[6].preco; break;
		case 7: conta = conta + tipos[7].preco; break;
		case 8: conta = conta + tipos[8].preco; break;
		case 9: conta = conta + tipos[9].preco; break;
		default: cout << "Voc� n�o digitou nenhuma op��o do card�pio!!!\n";
		}
		cout << "Sua conta at� agora est� em " << conta << "R$\n";
		cout << "Deseja comprar mais alguma coisa (?): ";
		cin >> opcao;
	}
		cout << "O valor total da conta � de " << conta << "R$. Tenha uma boa noite!\n";
}