#include <iostream>
using namespace std;

int main() {
	double largura, peso;
	
	cout << "Digite a largura (m) e o peso (ton): ";
	cin >> largura >> peso;
	
	if (!(largura<=3 && peso<=10))	//se NAO atende largura e peso
		cout << "Nao pode passar\n";
	else
		cout << "Pode passar!\n";
	
	return 0;
}
