#include <iostream>
using namespace std;

int main() {
	double largura, peso;
	
	cout << "Digite a largura (m) e o peso (ton): ";
	cin >> largura >> peso;
	
	if (largura<=3 && peso<=10)
		cout << "Pode passar\n";
	else
		cout << "Nao pode passar!\n";
	
	return 0;
}
