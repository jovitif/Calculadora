#include<iostream>
#include<locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	char resp[4];
	while (strcmp(resp, "nao") != 0) {
		cout << "Digite o C�digo de Origem que eu irei retornar a Proced�ncia \n";
		short cod;
		cin >> cod;
		switch (cod) {
		case 1: cout << "Sul"; break;
		case 2: cout << "Sul"; break;
		case 3: cout << "Norte"; break;
		case 4: cout << "Centro-oeste"; break;
		case 5: cout << "Nordeste"; break;
		case 6: cout << "Nordeste"; break;
		case 7: cout << "Sudeste"; break;
		case 8: cout << "Sudeste"; break;
		case 9: cout << "Sudeste"; break;
		default: cout << "C�digo Inv�lido"; break;
		}
		cout << "\nDeseja continuar (?) \n";
		cin >> resp;
	}

}