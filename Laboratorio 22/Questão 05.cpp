#include<iostream>
#include<locale.h>
#include<cmath>
using namespace std;
//Comentario
int main() {
	enum {adição=1, subtração, multiplicação, divisão, quadrado};
	setlocale(LC_ALL, "portuguese");
	cout << "Calculadora virtual a sua disposição";
	char resp[4], lix;
	double num1, num2;
	short num;
	while (strcmp(resp, "nao")) {
		cout << "Qual operação deseja realizar ?\n";
		cout << "Digite (1) para adição, digite (2) para subtração, digite (3) para multiplicação , digite (4) para divisão e digite (5) para potencialização!\n";
		cin >> num;
		switch (num) {
		case adição: "Digite a operação: "; cin >> num1 >> lix >> num2; cout << "A soma entre os dois numeros é " << num1 + num2; break;
		case subtração: "Digite a operação: "; cin >> num1 >> lix >> num2; cout << "A subtração entre os dois numeros é " << num1 - num2; break;
		case multiplicação: "Digite a operação: "; cin >> num1 >> lix >> num2; cout << "A multiplicação entre os dois numeros é " << num1 * num2; break;
		case divisão: "Digite a operação: "; cin >> num1 >> lix >> num2; cout  << "A divisão entre os dois numeros é " << num1 / num2; break;
		case quadrado: "Digite a operação: "; cin >> num1 >> lix >> num2; cout << "A potencialização é " << pow(num1, num2); break;
		default: "Nenhuma opção valida foi digitada!";
		}
		cout << "\nDeseja continuar (?): ";
		cin >> resp;
	}
}