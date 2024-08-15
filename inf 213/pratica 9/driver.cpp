#include <iostream>
#include "MyStack.h"
#include "MyQueue.h"
#include "Mediana.h"

using namespace std;


// Insira aqui o codigo para a etapa 1....

void leNumeros(MyStack<int> &pilha, MyQueue<int> &fila, int n){
	int num;
	for (int i=0; i<n; i++){
		cin >> num;
		pilha.push(num);
		fila.push(num);
	}
}

void imprimeNumeros(MyStack<int> &pilha, MyQueue<int> &fila, int n){
	int num;
	for (int i=0; i<n; i++){
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << "\n";
	for (int i=0; i<n; i++){
		cout << fila.front() << " ";
		fila.pop();
	}
	cout << "\n";
}
//Voce pode adicionar includes como o abaixo...




void etapa1() {

	MyQueue<int> fila;
	MyStack<int> pilha;
	leNumeros(pilha,fila, 6);
	imprimeNumeros(pilha,fila, 6);

	/*
	Qual a diferenca entre a ordem dos numeros tirados da fila e da pilha?
	Na fila, os primeiros numeros colocados sao os primeiros tirados.
	Na pilha, os ultimos numeros colocados sao os primeiros tirados.
	*/

}

//---------------------------------------

// Insira aqui o codigo para a etapa 2....
bool consistente (){
	MyStack <char> caracteres;
	char c;
	while (cin >> c){
		switch (c)
		{
			case '(':
			case '[':
			case '{':
				caracteres.push(c);
				break;

			case ')':
				if(caracteres.empty() || caracteres.top()!='(' ) 
					return false;
				caracteres.pop();
				break;
			case ']':
				if(caracteres.empty() || caracteres.top()!='[' ) 
					return false;
				caracteres.pop();
				break;
			case '}':
				if(caracteres.empty() || caracteres.top()!='{' ) 
					return false;
				caracteres.pop();
				break;
		}
		
	}
	return caracteres.empty();

}

void etapa2() {

	if (consistente()){
		cout << "Consistente" << "\n" << "";
	}
	else{
		cout << "Inconsistente" << "\n" << "";
	}
}

//---------------------------------------

// Insira aqui o codigo para a etapa 3....


//#include "MedianaLenta.h" //use essa implementacao para fazer os primeiros testes (com o calculo lento da mediana...)
//#include "Mediana.h" //descomente esta linha para utilizar sua classe mais eficiente!
void etapa3() {
	//descomente o codigo abaixo ao fazer a etapa 3
	Mediana mediana;

	int n,elem;	
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> elem;
		mediana.insere(elem);
		cout << mediana.getMediana() << " ";
	}
	cout << endl;
}

//---------------------------------------




int main() {
	int etapa;
	cin >> etapa;
	switch(etapa) {
		case 1:
			cout << "Etapa 1" << endl;
			etapa1();
			break;
		case 2:
			cout << "Etapa 2" << endl;
			etapa2();
			break;
		case 3:
			cout << "Etapa 3" << endl;
			etapa3();
			break;
	}
}