#include <iostream>
using namespace std;

int main() {
	int prova1, prova2, prova3;
	int notafinal;
	
	//Le as notas das provas
	cout << "Digite sua nota na prova 1: ";
	cin >> prova1;
	cout << "Digite sua nota na prova 2: ";
	cin >> prova2;
	cout << "Digite sua nota na prova 3: ";
	cin >> prova3;

	//Calcula a nota final
	notafinal = prova1 + prova2 + prova3;
	
	//Escreva a nota final
	cout << "Sua nota final foi ";
	cout << notafinal << endl;

	if (notafinal >= 60)
		cout << "Aprovado!" << endl;
	else
		cout << "Reprovado!" << endl;
	
	return 0;
}
