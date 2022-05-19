#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<locale.h>
using namespace std;

void funcao_Traco(char t, short q) {
	for (short i=0; i < q; i++) {
		cout << t;
	}
}

struct Comida {
	char nome[10];
	float valor;
	float kilos;
	float total;
};

void funcao_Exibirpreco(Comida frut[]);

int main() {
	setlocale(LC_ALL, "portuguese");
	Comida frutas[3];
	strcpy(frutas[0].nome, "Alface");
	frutas[0].valor = 1.25;
	strcpy(frutas[1].nome, "Beterraba");
	frutas[1].valor = 0.65;
	strcpy(frutas[2].nome, "Cenoura");
	frutas[2].valor = 0.90;
	char opcao='n', pedido;
	float t_t = 0.0;
	frutas[0].total = 0, frutas[1].total = 0, frutas[2].total = 0;
	float desc = 0.0;
	float ent = 0.0;
	funcao_Exibirpreco(frutas);
	while (opcao != 's') {
		cout << "Faça seu pedido usando as letras (a, b, c) e (s) para encerrar: \n";
		cin >> pedido;
		switch (pedido)
		{
		case 'a': cout << "Quantos kg:"; cin >> frutas[0].kilos; frutas[0].total = frutas[0].total + (frutas[0].valor * frutas[0].kilos); break;
		case 'b': cout << "Quantos kg:"; cin >> frutas[1].kilos; frutas[1].total = frutas[1].total + (frutas[1].valor * frutas[1].kilos); break;
		case 'c': cout << "Quantos kg:"; cin >> frutas[2].kilos; frutas[2].total = frutas[2].total + (frutas[2].valor * frutas[2].kilos); break;
		case 's': opcao = 's'; break;
		default: "Nenhuma opção valida foi digitada.\n";
		}
		t_t = frutas[0].total + frutas[1].total + frutas[2].total;
	}
	if (t_t > 100) {
		desc = 0.5;
		t_t = t_t * desc;
	}
	else {
	}
	cout << "Total do pedido: R$ " << t_t << "\n";
	cout << "Descontos: R$ " << desc << "\n";
	if (frutas[0].kilos + frutas[1].kilos + frutas[2].kilos < 5) {
		ent = 3.50;
	}
	else if (frutas[0].kilos + frutas[1].kilos + frutas[2].kilos >= 5 && frutas[0].kilos + frutas[1].kilos + frutas[2].kilos < 20) {
		ent = 10.0;
	}
	else {
		ent = 8.0 + 0.10 * (frutas[0].kilos + frutas[1].kilos + frutas[2].kilos);
	}
	cout << "Custo de entrega: R$ " << ent << "\n";
	cout << "--------------------------------\n";
	cout << "Total a pagar: R$ " << ent + t_t << "\n";
}

void funcao_Exibirpreco(Comida frut[]) {
	cout << "Supermercado ABC\n";
	funcao_Traco('-', 16); cout << "\n";
	short j = 0;
	for (char i = 'a'; j < 3; i++, j++) {
		cout << i << ")" << " " << frut[j].nome << "           R$ " << frut[j].valor << "/Kg\n";
	}
}