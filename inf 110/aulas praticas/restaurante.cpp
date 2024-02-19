#include <iostream>
using namespace std;

int main() {
	int comida, bebida, sobremesa;
	int total;
	int valorpago, valoradicional;
	
	cout << "Digite valor do consumo de comida, bebida e sobremesa: ";
	cin >> comida >> bebida >> sobremesa;
	
	total = comida + bebida + sobremesa;
	
	cout << "Total: ";
	cout << total << endl;
	
	cout << "Valor pago: ";
	cin >> valorpago;

	if (valorpago < total) {
		cout << "Valor insuficiente\nFalta pagar " << total - valorpago;
		cout << "\nDigite valor adicional: ";
		cin >> valoradicional;
		valorpago = valorpago + valoradicional;
		
	}
	
	cout << "Troco = R$ " << valorpago - total << endl;
	
	return 0;
}
