#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
//Comentario
int main() {
	enum {adi��o=1, subtra��o, multiplica��o, divis�o, quadrado};
	setlocale(LC_ALL, "portuguese");
	cout << "Calculadora virtual a sua disposi��o";
	char resp[4], lix;
	double num1, num2;
	short num;
	while (strcmp(resp, "nao")) {
		cout << "Qual opera��o deseja realizar ?\n";
		cout << "Digite (1) para adi��o, digite (2) para subtra��o, digite (3) para multiplica��o , digite (4) para divis�o e digite (5) para potencializa��o!\n";
		cin >> num;
		switch (num) {
		case adi��o: "Digite a opera��o: "; cin >> num1 >> lix >> num2; cout << "A soma entre os dois numeros � " << num1 + num2; break;
		case subtra��o: "Digite a opera��o: "; cin >> num1 >> lix >> num2; cout << "A subtra��o entre os dois numeros � " << num1 - num2; break;
		case multiplica��o: "Digite a opera��o: "; cin >> num1 >> lix >> num2; cout << "A multiplica��o entre os dois numeros � " << num1 * num2; break;
		case divis�o: "Digite a opera��o: "; cin >> num1 >> lix >> num2; cout  << "A divis�o entre os dois numeros � " << num1 / num2; break;
		case quadrado: "Digite a opera��o: "; cin >> num1 >> lix >> num2; cout << "A potencializa��o � " << pow(num1, num2); break;
		default: "Nenhuma op��o valida foi digitada!";
		}
		cout << "\nDeseja continuar (?): ";
		cin >> resp;
	}
}