#include<iostream>
#include<locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	short t_a=0, t_e=0, t_i=0, t_o=0, t_u = 0;
	char text;
	do {
		cin >> text;
		switch (text){
		case 'a': t_a = t_a + 1; break;
		case 'e': t_e = t_e + 1; break;
		case 'i': t_i = t_i + 1; break;
		case 'o': t_o = t_o + 1; break;
		case 'u': t_u = t_u + 1; break;
		}
	} while (text != '@');
	cout << "O total de cada vogal é: \n";
	cout << "a:" << t_a << "\n";
	cout << "e:" << t_e<< "\n";
	cout << "i:" << t_i << "\n";
	cout << "o:" << t_o << "\n";
	cout << "u:" << t_u << "\n";
}