#include <iostream>
using namespace std;

int main() {
	double largura, peso;
	
	cout << "Digite a largura (m) e o peso (ton): ";
	cin >> largura >> peso;
	
	if (largura<=3)
		if (peso<=10)
			cout << "Pode passar\n";
		else
			cout << "Nao pode passar, muito pesado!\n";
	else
		cout << "Nao pode passar, muito largo!\n";
	
	return 0;
}
